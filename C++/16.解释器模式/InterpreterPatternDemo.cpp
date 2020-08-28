/**
 * @file InterpreterPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-15
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "AndExpression.h"
#include "OrExpression.h"
#include "TerminalExpression.h"

static Expression* GetMaleExpression() {
    std::shared_ptr<Expression> robert = std::make_shared<TerminalExpression>("Robert");
    std::shared_ptr<Expression> john = std::make_shared<TerminalExpression>("John");
    return new OrExpression(robert, john);
}

static Expression* GetMarriedWomanExpression() {
    std::shared_ptr<Expression> julie = std::make_shared<TerminalExpression>("Julie");
    std::shared_ptr<Expression> married = std::make_shared<TerminalExpression>("Married");
    return new AndExpression(julie, married);
}
int main(int argc, char const* argv[]) {
    Expression* is_male = GetMaleExpression();
    Expression* is_married_woman = GetMarriedWomanExpression();

    std::cout << "John is male? " << is_male->Interpret("John") << std::endl;
    std::cout << "Julie is a married women? " << is_married_woman->Interpret("Married Julie") << std::endl;

    if (nullptr != is_male) {
        delete is_male;
        is_male = nullptr;
    }
    if (nullptr != is_married_woman) {
        delete is_married_woman;
        is_married_woman = nullptr;
    }
    return 0;
}
