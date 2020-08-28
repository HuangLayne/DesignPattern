/**
 * @file list.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief 双端链表
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef LIST_H_
#define LIST_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

/**
 * @brief 链表迭代方向
 *
 */
typedef enum { LIST_HEAD, LIST_TAIL } ListDirection;

typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
    int64_t val;
} ListNode;

typedef struct {
    ListNode *head;
    ListNode *tail;
    unsigned int len;
    void (*free_func)(int64_t val);
    bool (*match_func)(int64_t a, int64_t b);
} List;

/**
 * @brief 链表迭代器
 *
 */
typedef struct {
    ListNode *next;
    ListDirection direction;
} ListIterator;

/**
 * @brief 创建一个链表节点
 *
 * @param val 节点存储的内容
 * @return ListNode*
 */
ListNode *list_node_new(int64_t val);

/**
 * @brief 创建链表
 *
 * @return List*
 */
List *list_create();

/**
 * @brief 销毁链表
 *
 * @param self
 */
void list_destroy(List *self);

/**
 * @brief 释放链表内的节点
 *
 * @param self
 */
void list_clear(List *self);

/**
 * @brief 将给定的节点附加到列表中，并在失败时返回该节点NULL
 *
 * @param self
 * @param node
 * @return ListNode*
 */
ListNode *list_push_back(List *self, ListNode *node);

/**
 * @brief 返回/分离列表中的最后一个节点，或为NULL
 *
 * @param self
 * @return ListNode*
 */
ListNode *list_pop_back(List *self);

/**
 * @brief 将给定节点前置到列表中，并在失败时返回该节点，NULL
 *
 * @param self
 * @param node
 * @return ListNode*
 */
ListNode *list_push_front(List *self, ListNode *node);

/**
 * @brief 返回/分离列表中的第一个节点，或为NULL
 *
 * @param self
 * @return ListNode*
 */
ListNode *list_pop_front(List *self);

/**
 * @brief 在指定位置插入节点
 *
 * @param self
 * @param node
 * @param index
 * @return ListNode*
 */
ListNode *list_insert(List *self, ListNode *node, unsigned int index);

/**
 * @brief 返回与val或NULL关联的节点
 *
 * @param self
 * @param val
 * @return ListNode*
 */
ListNode *list_find(List *self, int64_t val);

/**
 * @brief 返回给定索引处的节点或NULL
 *
 * @param self
 * @param index
 * @return ListNode*
 */
ListNode *list_at(List *self, int index);

/**
 * @brief 从列表中移除给定节点
 *
 * @param self
 * @param node
 * @param free_node 释放释放节点
 */
void list_remove(List *self, ListNode *node, bool free_node);

/**
 * @brief 链表迭代器相关操作
 *
 * @param list
 * @param direction
 * @return ListIterator*
 */

/**
 * @brief 分配一个新的ListIterator。失败时为空。接受一个方向，可以是LIST_HEAD或LIST_TAIL。
 *
 * @param list
 * @param direction
 * @return ListIterator*
 */
ListIterator *list_iterator_new(List *list, ListDirection direction);

/**
 * @brief 用给定的开始节点分配一个新的ListIterator，失败时为空
 *
 * @param node
 * @param direction
 * @return ListIterator*
 */
ListIterator *list_iterator_new_from_node(ListNode *node, ListDirection direction);

/**
 * @brief 返回下一个ListNode或当列表中不再有节点时返回 NULL。
 *
 * @param self
 * @return ListNode*
 */
ListNode *list_iterator_next(ListIterator *self);

/**
 * @brief 释放链表迭代器
 *
 * @param self
 */
void list_iterator_destroy(ListIterator *self);

#ifdef __cplusplus
}
#endif
#endif  // LIST_H_
