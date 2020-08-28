/**
 * @file SingletonLazy.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SINGLETON_LAZY_H_
#define SINGLETON_LAZY_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SingletonLazy SingletonLazy;

SingletonLazy* singleton_lazy_get_instance(void);

void singleton_lazy_show_message(SingletonLazy* singleton);

#ifdef __cplusplus
}
#endif
#endif  // SINGLETON_LAZY_H_
