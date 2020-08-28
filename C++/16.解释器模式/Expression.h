/**
 * @file Expression.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-15
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef EXPRESSION_H_
#define EXPRESSION_H_

#include <iostream>

class Expression {
   public:
    Expression(/* args */) = default;
    virtual ~Expression() = default;
    virtual bool Interpret(std::string context) = 0;
};

#endif  // EXPRESSION_H_
