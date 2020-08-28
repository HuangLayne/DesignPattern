/**
 * @file FactoryProducer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef FACTORY_PRODUCER_H_
#define FACTORY_PRODUCER_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Factory* factory_producer_get_factory(const char* choice);

#ifdef __cplusplus
}
#endif
#endif  // FACTORY_PRODUCER_H_
