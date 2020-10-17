/**
 * @file list.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "list.h"

#include "log.h"
#include "mem.h"

ListNode *list_node_new(int64_t val) {
    ListNode *self;
    if (!(self = malloc(sizeof(ListNode)))) return NULL;
    self->prev = NULL;
    self->next = NULL;
    self->val = val;
    return self;
}

List *list_create() {
    List *self;
    if (!(self = malloc(sizeof(List)))) return NULL;
    self->head = NULL;
    self->tail = NULL;
    self->free_func = NULL;
    self->match_func = NULL;
    self->len = 0;
    return self;
}

void list_destroy(List *self) {
    if (NULL == self) return;
    list_clear(self);
    free(self);
}

void list_clear(List *self) {
    if (NULL == self) return;
    unsigned int len = self->len;
    ListNode *next;
    ListNode *curr = self->head;

    while (len--) {
        next = curr->next;
        if (self->free_func) self->free_func(curr->val);
        free(curr);
        curr = next;
    }

    self->head = NULL;
    self->tail = NULL;
    self->len = 0;
}

ListNode *list_push_back(List *self, ListNode *node) {
    if (!node) return NULL;

    if (self->len) {
        node->prev = self->tail;
        node->next = NULL;
        self->tail->next = node;
        self->tail = node;
    } else {
        self->head = self->tail = node;
        node->prev = node->next = NULL;
    }

    ++self->len;
    return node;
}

ListNode *list_pop_back(List *self) {
    if (!self->len) return NULL;

    ListNode *node = self->tail;
    if (--self->len) {
        (self->tail = node->prev)->next = NULL;
    } else {
        self->tail = self->head = NULL;
    }

    node->next = node->prev = NULL;
    return node;
}

ListNode *list_push_front(List *self, ListNode *node) {
    if (!node) return NULL;

    if (self->len) {
        node->next = self->head;
        node->prev = NULL;
        self->head->prev = node;
        self->head = node;
    } else {
        self->head = self->tail = node;
        node->prev = node->next = NULL;
    }

    ++self->len;
    return node;
}

ListNode *list_pop_front(List *self) {
    if (!self->len) return NULL;

    ListNode *node = self->head;

    if (--self->len) {
        (self->head = node->next)->prev = NULL;
    } else {
        self->head = self->tail = NULL;
    }

    node->next = node->prev = NULL;
    return node;
}

ListNode *list_insert(List *self, ListNode *node, unsigned int index) {
    if (index <= 0) {
        // 插入链表的头部
        list_push_front(self, node);
    } else if (index >= self->len) {
        // 插入链表的尾部
        list_push_back(self, node);
    } else {
        ListNode *pre_node = list_at(self, index - 1);
        node->next = pre_node->next;
        node->prev = pre_node;
        pre_node->next->prev = node;
        pre_node->next = node;
        self->len++;
    }
    return node;
}

ListNode *list_find(List *self, int64_t val) {
    ListIterator *it = list_iterator_new(self, LIST_HEAD);
    ListNode *node;

    while ((node = list_iterator_next(it))) {
        if (self->match_func) {
            if (self->match_func(val, node->val)) {
                list_iterator_destroy(it);
                return node;
            }
        } else {
            if (val == node->val) {
                list_iterator_destroy(it);
                return node;
            }
        }
    }

    list_iterator_destroy(it);
    return NULL;
}

ListNode *list_at(List *self, int index) {
    ListDirection direction = LIST_HEAD;

    if (index < 0) {
        direction = LIST_TAIL;
        index = ~index;
    }

    if ((unsigned)index < self->len) {
        ListIterator *it = list_iterator_new(self, direction);
        ListNode *node = list_iterator_next(it);
        while (index--) node = list_iterator_next(it);
        list_iterator_destroy(it);
        return node;
    }

    return NULL;
}

void list_remove(List *self, ListNode *node, bool free_node) {
    node->prev ? (node->prev->next = node->next) : (self->head = node->next);

    node->next ? (node->next->prev = node->prev) : (self->tail = node->prev);

    if (free_node) {
        if (self->free_func) self->free_func(node->val);
        free(node);
    }
    --self->len;
}

ListIterator *list_iterator_new(List *list, ListDirection direction) {
    ListNode *node = direction == LIST_HEAD ? list->head : list->tail;
    return list_iterator_new_from_node(node, direction);
}

ListIterator *list_iterator_new_from_node(ListNode *node, ListDirection direction) {
    ListIterator *self;
    if (!(self = malloc(sizeof(ListIterator)))) return NULL;
    self->next = node;
    self->direction = direction;
    return self;
}

ListNode *list_iterator_next(ListIterator *iterator) {
    ListNode *curr = iterator->next;
    if (curr) {
        iterator->next = iterator->direction == LIST_HEAD ? curr->next : curr->prev;
    }
    return curr;
}

void list_iterator_destroy(ListIterator *self) { free(self); }
