/**
 * @file log.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "log.h"

#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <sys/syscall.h>
#include <time.h>
#include <unistd.h>

#include "mem.h"
#include "thread.h"

#ifdef __ANDROID__
#include <android/log.h>
#define TAG "lictools-log"
#define ALOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)
#define ALOGF(...) __android_log_print(ANDROID_LOG_FATAL, TAG, __VA_ARGS__)
#endif

#define MAX_BUFFER_SIZE 400
#define FFMIN(a, b) ((a) > (b) ? (b) : (a))

#define NONE "\033[0m"
#define BLACK "\033[0;30m"
#define L_BLACK "\033[1;30m"
#define RED "\033[0;31m"
#define L_RED "\033[1;31m"
#define GREEN "\033[0;32m"
#define L_GREEN "\033[1;32m"
#define YELLOW "\033[0;33m"
#define L_YELLOW "\033[1;33m"
#define BLUE "\033[0;34m"
#define L_BLUE "\033[1;34m"
#define PURPLE "\033[0;35m"
#define L_PURPLE "\033[1;35m"
#define CYAN "\033[0;36m"
#define L_CYAN "\033[1;36m"
#define GRAY "\033[0;37m"
#define WHITE "\033[1;37m"

#ifdef __APPLE__
#include "TargetConditionals.h"
#if TARGET_OS_MAC
static LogMode self_log_mode = LOG_MODE_SCREEN;
#else
static LogMode self_log_mode = LOG_MODE_SCREEN;
#endif
#elif __ANDROID__
static LogMode self_log_mode = LOG_MODE_ANDROID;
#elif __linux__
static LogMode self_log_mode = LOG_MODE_SCREEN;
#elif __unix__  // all unices not caught above
static LogMode self_log_mode = LOG_MODE_SCREEN;
#else
static LogMode self_log_mode = LOG_MODE_NONE;
#endif
#ifdef DEBUG
static LogLevel self_log_level = LOG_LEVEL_DEBUG;
#else
static LogLevel self_log_level = LOG_LEVEL_INFO;
#endif

// 回调函数指针和上下文
static LogCallback self_log_callback_function = NULL;
static void *self_log_callback_opaque = NULL;
static FILE *self_log_file = NULL;
static char self_log_buffer[MAX_BUFFER_SIZE];
static pthread_mutex_t self_log_lock = PTHREAD_MUTEX_INITIALIZER;

static char get_leve_flag(const LogLevel level) {
    switch (level) {
        case LOG_LEVEL_TRACE:
            return 'T';
        case LOG_LEVEL_DEBUG:
            return 'D';
        case LOG_LEVEL_VERBOSE:
            return 'V';
        case LOG_LEVEL_INFO:
            return 'I';
        case LOG_LEVEL_WARNING:
            return 'W';
        case LOG_LEVEL_ERROR:
            return 'E';
        case LOG_LEVEL_FATAL:
            return 'F';
        case LOG_LEVEL_PANIC:
            return 'P';
        case LOG_LEVEL_QUIET:
            return 'Q';
        default:
            break;
    }
    return 'E';
}

static void update_buffer(const LogLevel level, const char *filename, const int line, const char *format,
                          va_list args) {
    char *basename = strrchr(filename, '/') + 1;
    size_t len = 0;

    if (LOG_MODE_ANDROID == self_log_mode) {
        len += snprintf(self_log_buffer + len, MAX_BUFFER_SIZE - len, "/%s:%d:", basename, line);
    } else {
        pid_t pid = getpid();
        pid_t tid = getthreadid();
        struct timespec ts;
        clock_gettime(CLOCK_REALTIME, &ts);
        len += strftime(self_log_buffer, sizeof(self_log_buffer), "%Y/%m/%d %T", localtime(&ts.tv_sec));
        len += snprintf(self_log_buffer + len, MAX_BUFFER_SIZE - len, ".%06ld %d-%d/%c/%s:%d:", ts.tv_nsec / 1000, pid,
                        tid, get_leve_flag(level), basename, line);
    }
    vsnprintf(self_log_buffer + len, MAX_BUFFER_SIZE - len, format, args);
}

static void log_to_file() {
    if (NULL == self_log_file) return;
    fprintf(self_log_file, "%s", self_log_buffer);
}

static void log_to_screen(const LogLevel level) {
    switch (level) {
        case LOG_LEVEL_VERBOSE:
            printf(L_BLUE "%s" NONE, self_log_buffer);
            break;
        case LOG_LEVEL_DEBUG:
            printf(L_BLUE "%s" NONE, self_log_buffer);
            break;
        case LOG_LEVEL_INFO:
            printf(L_GREEN "%s" NONE, self_log_buffer);
            break;
        case LOG_LEVEL_WARNING:
            printf(L_YELLOW "%s" NONE, self_log_buffer);
            break;
        case LOG_LEVEL_ERROR:
            printf(L_RED "%s" NONE, self_log_buffer);
            break;
        case LOG_LEVEL_FATAL:
            printf(L_RED "%s" NONE, self_log_buffer);
            break;
        default:
            printf(L_BLUE "%s" NONE, self_log_buffer);
            break;
    }
}

static void log_to_callback() {
    if (NULL == self_log_callback_function) return;
    self_log_callback_function(self_log_callback_opaque, self_log_buffer);
}

#ifdef __ANDROID__
static void log_to_android(const LogLevel level) {
    switch (level) {
        case LOG_LEVEL_VERBOSE:
            ALOGV("%s", self_log_buffer);
            break;
        case LOG_LEVEL_DEBUG:
            ALOGD("%s", self_log_buffer);
            break;
        case LOG_LEVEL_INFO:
            ALOGI("%s", self_log_buffer);
            break;
        case LOG_LEVEL_WARNING:
            ALOGW("%s", self_log_buffer);
            break;
        case LOG_LEVEL_ERROR:
            ALOGE("%s", self_log_buffer);
            break;
        case LOG_LEVEL_FATAL:
            ALOGF("%s", self_log_buffer);
            break;
        default:
            ALOGV("%s", self_log_buffer);
            break;
    }
}
#endif

void log_print(const LogLevel level, const char *filename, const int line, const char *format, ...) {
    if (level < self_log_level || LOG_MODE_NONE == self_log_mode) return;

    pthread_mutex_lock(&self_log_lock);
    va_list args;
    va_start(args, format);

    update_buffer(level, filename, line, format, args);
    switch (self_log_mode) {
        case LOG_MODE_FILE:
            log_to_file();
            break;
        case LOG_MODE_ANDROID:
#ifdef __ANDROID__
            log_to_android(level);
#endif
            break;
        case LOG_MODE_SCREEN:
            log_to_screen(level);
            break;
        case LOG_MODE_CALLBACK:
            log_to_callback();
            break;
        default:
            break;
    }

    va_end(args);
    pthread_mutex_unlock(&self_log_lock);
    if (level >= LOG_LEVEL_FATAL) {
        abort();
    }
}

int log_set_path(const char *path) {
    int ret = 0;

    pthread_mutex_lock(&self_log_lock);

    if (self_log_file && self_log_file != stderr) {
        fclose(self_log_file);
        self_log_file = NULL;
    }
    self_log_file = fopen(path, "wb");

    if (!self_log_file) {
        ret = ERROR_OPEN_LOG_FILE;
        self_log_file = stderr;
    }
    if (setvbuf(self_log_file, NULL, _IONBF, 0) != 0) ret = ERROR_OPEN_LOG_FILE;

    pthread_mutex_unlock(&self_log_lock);
    return ret;
}

void log_set_mode(const LogMode mode) {
    pthread_mutex_lock(&self_log_lock);
    self_log_mode = mode;
    pthread_mutex_unlock(&self_log_lock);

    log_info("Compilation time: %s %s.", __DATE__, __TIME__);
}

void log_set_level(const LogLevel level) {
    pthread_mutex_lock(&self_log_lock);
    self_log_level = level;
    pthread_mutex_unlock(&self_log_lock);
}

void log_set_callback(LogCallback callback_function, void *opaque) {
    pthread_mutex_lock(&self_log_lock);
    self_log_callback_function = callback_function;
    self_log_callback_opaque = opaque;
    pthread_mutex_unlock(&self_log_lock);
}
