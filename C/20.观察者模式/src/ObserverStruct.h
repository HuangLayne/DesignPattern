/**
 * @file ObserverStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef OBSERVER_STRUCT_H_
#define OBSERVER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Observer {
    void* priv;

    struct Subject* subject;
    void (*update)(struct Observer* observer);
    void (*destroy)(struct Observer* observer);
};

#ifdef __cplusplus
}
#endif
#endif  // OBSERVER_STRUCT_H_
