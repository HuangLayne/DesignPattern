/**
 * @file Expression.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef EXPRESSION_H_
#define EXPRESSION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

typedef struct Expression Expression;

Expression* terminal_expression_create(const char* data);
Expression* and_expression_create(struct Expression* expression1, struct Expression* expression2);
Expression* or_expression_create(struct Expression* expression1, struct Expression* expression2);
void expression_destroy(Expression** expression);
bool expression_interpret(Expression* expression, const char* context);

#ifdef __cplusplus
}
#endif
#endif  // EXPRESSION_H_
