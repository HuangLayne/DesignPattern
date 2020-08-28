/**
 * @file Broker.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Broker.h"

#include "Order.h"
#include "ctools.h"

struct Broker {
    List* order_list;
};

Broker* broker_create(void) {
    Broker* broker = (Broker*)calloc(1, sizeof(Broker));
    if (NULL == broker) return NULL;

    broker->order_list = list_create();
    broker->order_list->free_func = (void (*)(int64_t))order_destroy;
    return broker;
}

void broker_destroy(Broker** broker) {
    if (NULL == broker || NULL == *broker) return;
    Broker* self = *broker;
    list_destroy(self->order_list);
    freep((void**)broker);
}

void broker_take_order(Broker* broker, Order* order) {
    if (NULL == broker) return;
    list_push_back(broker->order_list, list_node_new((int64_t)order));
}

void broker_place_orders(Broker* broker) {
    if (NULL == broker) return;

    ListIterator* it = list_iterator_new(broker->order_list, LIST_HEAD);
    ListNode* node;

    while ((node = list_iterator_next(it))) {
        Order* order = (Order*)node->val;
        order_excute(order);
    }

    list_iterator_destroy(it);
    list_clear(broker->order_list);
}
