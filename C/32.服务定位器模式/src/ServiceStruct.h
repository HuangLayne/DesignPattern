/**
 * @file ServiceStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SERVICE_STRUCT_H_
#define SERVICE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Service {
    void* priv;
    const char* (*get_name)(struct Service* service);
    void (*excute)(struct Service* service);
    void (*destroy)(struct Service* serviec);
};

#ifdef __cplusplus
}
#endif
#endif  // SERVICE_STRUCT_H_
