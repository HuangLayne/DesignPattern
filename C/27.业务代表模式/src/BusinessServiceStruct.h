/**
 * @file BusinessServiceStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef BUSINESS_SERVICE_STRUCT_H_
#define BUSINESS_SERVICE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct BusinessService {
    void* priv;

    void (*do_processing)(struct BusinessService* business_service);
    void (*destroy)(struct BusinessService* business_service);
};

#ifdef __cplusplus
}
#endif
#endif  // BUSINESS_SERVICE_STRUCT_H_
