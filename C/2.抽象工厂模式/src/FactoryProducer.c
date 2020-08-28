/**
 * @file FactoryProducer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "FactoryProducer.h"

#include <stdlib.h>
#include <string.h>

#include "FactoryStruct.h"

extern struct Factory* color_factory_create(void);
extern struct Factory* shape_factory_create(void);

struct Factory* factory_producer_get_factory(const char* choice) {
    if (NULL == choice) return NULL;

    if (0 == strcasecmp("SHAPE", choice)) {
        return shape_factory_create();
    } else if (0 == strcasecmp("COLOR", choice)) {
        return color_factory_create();
    }
    return NULL;
}
