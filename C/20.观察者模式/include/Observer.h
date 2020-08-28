/**
 * @file Observer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Observer Observer;
typedef struct Subject Subject;
Observer* hexa_observer_create(Subject* subject);
Observer* octal_observer_create(Subject* subject);
Observer* binary_obbserver_create(Subject* subject);
void observer_update(Observer* Observer);
void observer_destroy(Observer** Observer);

#ifdef __cplusplus
}
#endif
#endif  // OBSERVER_H_
