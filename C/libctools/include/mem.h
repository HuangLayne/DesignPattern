/**
 * @file mem.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef MEM_H_
#define MEM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief 申请内存并初始化为0
 *
 * @param size 内存大小，按字节计算
 * @return void* 内存地址
 */
void *mallocz(size_t size);

/**
 * @brief 释放内存，并将地址置为NULL
 *
 * @param ptr 指向指针的指针
 */
void freep(void **ptr);

/**
 * @brief 申请并拷贝内存
 *
 * @param p 源内存地址
 * @param size 需要拷贝的内存大小
 * @return void* 拷贝后的内存地址
 */
void *mem_dup(const void *p, size_t size);

/************ 带引用计数的内存管理  ************/
/**
 * @brief 定义内存析构函数，当内存对象的引用为零时调用该函数
 *
 */
typedef void(mem_destroy_h)(void *data);

/**
 * @brief 分配新的引用计数内存对象
 *
 * @param size 内存对象大小
 * @param dh 可选析构函数，销毁时调用
 * @return void* 指向已分配对象的指针
 */
void *mem_alloc(size_t size, mem_destroy_h *dh);

/**
 * @brief 分配新的引用计数内存对象，并初始化内存为0
 *
 * @param size 内存对象大小
 * @param dh 可选析构函数，销毁时调用
 * @return void* 指向已分配对象的指针
 */
void *mem_zalloc(size_t size, mem_destroy_h *dh);

/**
 * @brief 引用一个引用计数内存对象
 *
 * @param data 内存对象
 * @return void* 内存对象
 */
void *mem_ref(void *data);

/**
 * @brief 取消引用已计数的引用内存对象。当引用计数为零时，将调用析构函数（如果存在），并释放内存
 *
 * @param data 内存对象
 */
void mem_deref(void *data);

/**
 * @brief 获取引用计数内存对象的引用数
 *
 * @param data 内存对象
 * @return uint32_t 引用数
 */
uint32_t mem_nrefs(const void *data);

#ifdef DEBUG
// 重新实现malloc
#define malloc(size) mem_leak_detection_malloc(size, __FILE__, __LINE__)
// 重新实现mallocz
#define mallocz(size) mem_leak_detection_mallocz(size, __FILE__, __LINE__)
// 重新实现calloc
#define calloc(elements, size) mem_leak_detection_calloc(elements, size, __FILE__, __LINE__)
// 重新实现relloc
#define realloc(ptr, size) mem_leak_detection_realloc(ptr, size, __FILE__, __LINE__)
// 重新实现free
#define free(ptr) mem_leak_detection_free(ptr, __FILE__, __LINE__)
// 重新实现freep
#define freep(ptr) mem_leak_detection_freep(ptr, __FILE__, __LINE__)

void *mem_leak_detection_malloc(size_t size, const char *file, unsigned int line);
void *mem_leak_detection_mallocz(size_t size, const char *file, unsigned int line);
void *mem_leak_detection_calloc(size_t count, size_t size, const char *file, unsigned int line);
void *mem_leak_detection_realloc(void *ptr, size_t size, const char *file, unsigned int line);
void mem_leak_detection_free(void *ptr, const char *file, unsigned int line);
void mem_leak_detection_freep(void **ptr, const char *file, unsigned int line);
void mem_leak_detection_report();

#endif

#ifdef __cplusplus
}
#endif
#endif  // MEM_H_
