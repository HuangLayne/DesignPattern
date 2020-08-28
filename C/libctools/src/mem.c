/**
 * @file mem.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "mem.h"

#include <stdatomic.h>

#include "log.h"

#ifndef DEBUG
void *mallocz(size_t size) {
    void *mem = malloc(size);
    if (!mem) return mem;

    memset(mem, 0, size);
    return mem;
}

void freep(void **ptr) {
    if (NULL == ptr || NULL == *ptr) return;

    free(*ptr);
    *ptr = NULL;
}
#endif

void *mem_dup(const void *p, size_t size) {
    void *ptr = NULL;
    if (p) {
        ptr = malloc(size);
        if (ptr) memcpy(ptr, p, size);
    }
    return ptr;
}

struct mem {
    atomic_uint ref_count; /**< 引用计数 */
    mem_destroy_h *dh;     /**< 析构函数 */
};

void *mem_alloc(size_t size, mem_destroy_h *dh) {
    struct mem *m = malloc(sizeof(*m) + size);
    if (!m) return NULL;

    atomic_init(&m->ref_count, 1);
    m->dh = dh;
    return (void *)(m + 1);
}

void *mem_zalloc(size_t size, mem_destroy_h *dh) {
    void *p = mem_alloc(size, dh);
    if (!p) return NULL;

    memset(p, 0, size);
    return p;
}

void *mem_ref(void *data) {
    if (NULL == data) return NULL;

    struct mem *m = ((struct mem *)data) - 1;
    atomic_fetch_add_explicit(&m->ref_count, 1, memory_order_relaxed);

    return data;
}

void mem_deref(void *data) {
    if (NULL == data) return;

    struct mem *m = ((struct mem *)data) - 1;

    if (atomic_fetch_add_explicit(&m->ref_count, -1, memory_order_acq_rel) == 1) {
        if (m->dh) m->dh(data);
        free(m);
    }
}

uint32_t mem_nrefs(const void *data) {
    if (NULL == data) return 0;
    struct mem *m = ((struct mem *)data) - 1;
    return atomic_load(&m->ref_count);
}
