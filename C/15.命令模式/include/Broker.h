/**
 * @file Broker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef BROKER_H_
#define BROKER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Broker.h"
#include "Order.h"

typedef struct Broker Broker;

Broker* broker_create(void);
void broker_destroy(Broker** broker);
void broker_take_order(Broker* broker, Order* order);
void broker_place_orders(Broker* broker);

#ifdef __cplusplus
}
#endif
#endif  // BROKER_H_
