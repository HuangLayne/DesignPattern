/**
 * @file TerminalExpression.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef TERMINAL_EXPRESSION_H_
#define TERMINAL_EXPRESSION_H_

#include "Expression.h"

class TerminalExpression : public Expression {
   public:
    TerminalExpression(std::string data) : data_(data) {}
    virtual ~TerminalExpression() = default;
    bool Interpret(std::string context) override {
        std::string::size_type idx = context.find(data_);
        return (idx == std::string::npos ? false : true);
    }

   private:
    std::string data_;
};

#endif  // TERMINAL_EXPRESSION_H_
