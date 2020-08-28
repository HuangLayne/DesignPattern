/**
 * @file AndExpression.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef AND_EXPRESSION_H_
#define AND_EXPRESSION_H_
#include "Expression.h"

class AndExpression : public Expression {
   public:
    AndExpression(std::shared_ptr<Expression> expr1, std::shared_ptr<Expression> expr2)
        : expr1_(expr1), expr2_(expr2) {}
    virtual ~AndExpression() = default;
    bool Interpret(std::string context) override { return expr1_->Interpret(context) && expr2_->Interpret(context); }

   private:
    std::shared_ptr<Expression> expr1_;
    std::shared_ptr<Expression> expr2_;
};

#endif  // AND_EXPRESSION_H_
