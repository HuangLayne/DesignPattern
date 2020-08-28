/**
 * @file ExpressionStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef EXPRESSION_STRUCT_H_
#define EXPRESSION_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

struct Expression {
    void* priv;

    bool (*interpret)(struct Expression* expression, const char* context);
    void (*destroy)(struct Expression* expression);
};

#ifdef __cplusplus
}
#endif
#endif  // EXPRESSION_STRUCT_H_
