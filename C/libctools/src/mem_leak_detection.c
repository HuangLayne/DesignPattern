/**
 * @file mem_leak_detection.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-06-28
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <pthread.h>
#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>

#include "cmacro_defs.h"
#include "log.h"
#include "mem.h"
#include "thread.h"

#ifdef DEBUG

#ifdef __ANDROID__
#define OUTPUT_FILE "/sdcard/memory_leak_info.txt"
#else
#define OUTPUT_FILE "memory_leak_info.txt"
#endif

#define FILE_NAME_LENGTH 256

#undef malloc
#undef calloc
#undef realloc
#undef free

typedef struct MemInfoT {
    void *address;                     // 分配的地址
    size_t size;                       // 地址大小
    int64_t thread_id;                 // 线程号
    char file_name[FILE_NAME_LENGTH];  // 在哪个文件申请
    unsigned int line;                 // 行数
} MemInfo;

typedef struct MemLeakT {  // 将所有malloc和calloc申请的内存串起来
    MemInfo mem_info;
    struct MemLeakT *next;
} MemLeak;

static MemLeak *g_mem_leak_start = NULL;
static MemLeak *g_mem_leak_next = NULL;
static pthread_mutex_t g_mem_leak_detection_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_once_t g_mem_leak_detection_key_once = PTHREAD_ONCE_INIT;

// 从队列中移除所有的内存信息
static void clear_mem_info_list() {
    MemLeak *alloc_info = g_mem_leak_start;
    MemLeak *alloc_info_next = g_mem_leak_start;

    while (alloc_info != NULL) {
        alloc_info_next = alloc_info->next;
        free(alloc_info);
        alloc_info = alloc_info_next;
    }
    g_mem_leak_start = g_mem_leak_next = NULL;
}

UNUSED static void report_to_file() {
    FILE *fp_write = fopen(OUTPUT_FILE, "wt");
    char info[1024];

    if (fp_write != NULL) {
        sprintf(info, "%s\n", "Memory Leak Summary");
        fwrite(info, (strlen(info) + 1), 1, fp_write);
        sprintf(info, "%s\n", "-----------------------------------");
        fwrite(info, (strlen(info) + 1), 1, fp_write);

        for (MemLeak *leak_info = g_mem_leak_start; leak_info != NULL; leak_info = leak_info->next) {
            sprintf(info, "address : %p\n", leak_info->mem_info.address);
            fwrite(info, (strlen(info) + 1), 1, fp_write);
            sprintf(info, "thread  : %lld\n", (long long)leak_info->mem_info.thread_id);
            fwrite(info, (strlen(info) + 1), 1, fp_write);
            sprintf(info, "place   : %s:%u\n", leak_info->mem_info.file_name, leak_info->mem_info.line);
            fwrite(info, (strlen(info) + 1), 1, fp_write);
            sprintf(info, "size    : %zu bytes\n", leak_info->mem_info.size);
            fwrite(info, (strlen(info) + 1), 1, fp_write);
            sprintf(info, "%s\n", "-----------------------------------");
            fwrite(info, (strlen(info) + 1), 1, fp_write);
        }
    }
}

static void report_to_log() {
    log_info("Memory Leak Summary");
    log_info("-----------------------------------");
    if (NULL == g_mem_leak_start) {
        log_info("No Memory Leak!");
    } else {
        for (MemLeak *leak_info = g_mem_leak_start; leak_info != NULL; leak_info = leak_info->next) {
            log_info("address : %p", leak_info->mem_info.address);
            log_info("thread  : %lld", leak_info->mem_info.thread_id);
            log_info("place   : %s:%d", leak_info->mem_info.file_name, leak_info->mem_info.line);
            log_info("size    : %zu bytes", leak_info->mem_info.size);
            log_info("-----------------------------------");
        }
    }
}

void mem_leak_detection_report() {
    report_to_log();
    // report_to_file();
    clear_mem_info_list();
}

static void regest_mem_leak_detection_report() { atexit(mem_leak_detection_report); }

// 获取申请分配的内存信息，并将它添加到队列中
static void add_mem_info(void *mem_ref, size_t size, const char *file, unsigned int line) {
    MemLeak *mem_leak_info = (MemLeak *)malloc(sizeof(MemLeak));
    if (NULL == mem_leak_info) return;

    pthread_mutex_lock(&g_mem_leak_detection_lock);
    mem_leak_info->mem_info.address = mem_ref;
    mem_leak_info->mem_info.size = size;
    mem_leak_info->mem_info.thread_id = getthreadid();
    strncpy(mem_leak_info->mem_info.file_name, file, FILE_NAME_LENGTH);
    mem_leak_info->mem_info.line = line;
    mem_leak_info->next = NULL;

    if (g_mem_leak_start == NULL) {
        g_mem_leak_start = mem_leak_info;
        g_mem_leak_next = g_mem_leak_start;
    } else {
        g_mem_leak_next->next = mem_leak_info;
        g_mem_leak_next = g_mem_leak_next->next;
    }
    pthread_mutex_unlock(&g_mem_leak_detection_lock);
}

static void remove_mem_info_head() {
    if (g_mem_leak_start == g_mem_leak_next) {
        clear_mem_info_list();
    } else {
        MemLeak *leak_info = g_mem_leak_start;
        g_mem_leak_start = g_mem_leak_start->next;
        free(leak_info);
        return;
    }
}

// 从队列中移除已分配的内存信息
static void remove_mem_info(void *mem_ref, const char *file, unsigned int line) {
    if (NULL == g_mem_leak_start) return;

    pthread_mutex_lock(&g_mem_leak_detection_lock);

    if (mem_ref == g_mem_leak_start->mem_info.address) {
        remove_mem_info_head();
    } else {
        MemLeak *leak_info = g_mem_leak_start;
        MemLeak *leak_info_next = g_mem_leak_start->next;
        while (NULL != leak_info_next) {
            if (mem_ref == leak_info_next->mem_info.address) {
                leak_info->next = leak_info_next->next;
                if (g_mem_leak_next == leak_info_next) {
                    // 如果是尾节点
                    g_mem_leak_next = leak_info;
                }
                free(leak_info_next);
                break;
            }
            leak_info = leak_info->next;
            leak_info_next = leak_info_next->next;
        }
        if (NULL == leak_info_next) {
            log_error("free error at: %s:%d", file, line);
        }
    }

    pthread_mutex_unlock(&g_mem_leak_detection_lock);
}

void *mem_leak_detection_malloc(size_t size, const char *file, unsigned int line) {
    pthread_once(&g_mem_leak_detection_key_once, regest_mem_leak_detection_report);
    void *ptr = malloc(size);
    if (NULL != ptr) {
        add_mem_info(ptr, size, file, line);
    }
    return ptr;
}

void *mem_leak_detection_mallocz(size_t size, const char *file, unsigned int line) {
    pthread_once(&g_mem_leak_detection_key_once, regest_mem_leak_detection_report);
    void *ptr = malloc(size);
    if (NULL != ptr) {
        memset(ptr, 0, size);
        add_mem_info(ptr, size, file, line);
    }
    return ptr;
}

void *mem_leak_detection_calloc(size_t count, size_t size, const char *file, unsigned int line) {
    pthread_once(&g_mem_leak_detection_key_once, regest_mem_leak_detection_report);
    size_t total_size;
    void *ptr = calloc(count, size);
    if (NULL != ptr) {
        total_size = count * size;
        add_mem_info(ptr, total_size, file, line);
    }
    return ptr;
}

void *mem_leak_detection_realloc(void *ptr, size_t size, const char *file, unsigned int line) {
    pthread_once(&g_mem_leak_detection_key_once, regest_mem_leak_detection_report);
    if (NULL != ptr) remove_mem_info(ptr, file, line);

    void *new_ptr = realloc(ptr, size);
    if (NULL != new_ptr) {
        add_mem_info(new_ptr, size, file, line);
    }

    return new_ptr;
}

void mem_leak_detection_free(void *ptr, const char *file, unsigned int line) {
    pthread_once(&g_mem_leak_detection_key_once, regest_mem_leak_detection_report);
    remove_mem_info(ptr, file, line);
    free(ptr);
}

void mem_leak_detection_freep(void **ptr, const char *file, unsigned int line) {
    if (NULL == ptr || NULL == *ptr) return;

    mem_leak_detection_free(*ptr, file, line);
    *ptr = NULL;
}

#endif
