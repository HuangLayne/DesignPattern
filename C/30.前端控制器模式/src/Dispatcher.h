/**
 * @file Dispatcher.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Dispatcher Dispatcher;

Dispatcher* dispatcher_create(void);

void dispatcher_destroy(Dispatcher** dispatcher);

void dispatcher_dispatch(Dispatcher* dispatcher, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // DISPATCHER_H_
