/**
 * @file cmap.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CMAP_H_
#define CMAP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

/**
 * @brief 创建 Map
 *
 * @return void* Map
 */
void *cmap_create();

/**
 * @brief 插入元素
 *
 * @param data Map
 * @param key 元素的关键字
 * @param value 元素的值
 */
void cmap_put(void *data, int64_t key, void *value);

/**
 * @brief 获取关键字对应元素的值
 *
 * @param data Map
 * @param key 元素关键字
 * @return void* 关键字对应元素的值
 */
void *cmap_get(void *data, int64_t key);

/**
 * @brief 移除关键字对应的元素
 *
 * @param data Map
 * @param key 关键字
 * @return int 0表示成功，-1表示失败
 */
int cmap_remove(void *data, int64_t key);

/**
 * @brief 获取Map中元素的个数
 *
 * @param data Map
 * @return int Map中元素的个数
 */
size_t cmap_size(void *data);

/**
 * @brief 获取Map可以容纳的最大元素个数
 *
 * @param data Map
 * @return int Map可以容纳的最大元素个数
 */
size_t cmap_max_size(void *data);

/**
 * @brief 获取Map中索引所指的元素的值
 *
 * @param data Map
 * @param index 索引
 * @return void* 索引所指元素的值
 */
void *cmap_index_get(void *data, int index);

/**
 * @brief 从头到尾遍历Map
 *
 * @param data Map
 * @param parm Opaque
 * @param enu 遍历函数指针
 */
void cmap_traversal_handle(void *data, void *parm, int (*enu)(void *parm, int64_t key, void *elem));

/**
 * @brief 获取所有的key
 *
 * @param data Map
 * @param toArray int64_t数组，尺寸跟data size一致
 */
void cmap_get_all_keys(void *data, int64_t *toArray);

/**
 * @brief 获取所有的value
 *
 * @param data Map
 * @param toArray int64_t数组，尺寸跟data size一致
 */
void cmap_get_all_values(void *data, void **toArray);

/**
 * @brief 获取所有的value
 *
 * @param data Map
 * @param value char *类型的value
 * @return -1表示不存在
 */
int64_t cmap_get_key_for_value(void *data, char *value);

/**
 * @brief 获取Map所有元素中最小的关键字
 *
 * @param data Map
 * @return int64_t 最小的关键字
 */
int64_t cmap_get_min_key(void *data);

/**
 * @brief 清空Map
 *
 * @param data Map
 */
void cmap_clear(void *data);

/**
 * @brief 清空并释放Map
 *
 * @param data Map
 */
void cmap_destroy(void *data);

#ifdef __cplusplus
}
#endif
#endif  // CMAP_H_
