/**
 * @file CircleStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CIRCLE_STRUCT_H_
#define CIRCLE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Circle {
    const char* color;
    int x;
    int y;
    int radius;
};

#ifdef __cplusplus
}
#endif
#endif  // CIRCLE_STRUCT_H_
