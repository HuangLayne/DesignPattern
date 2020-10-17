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

static std::shared_ptr<Expression> GetMaleExpression() {
    std::shared_ptr<Expression> robert = std::make_shared<TerminalExpression>("Robert");
    std::shared_ptr<Expression> john = std::make_shared<TerminalExpression>("John");
    return std::make_shared<OrExpression>(robert, john);
}

static std::shared_ptr<Expression> GetMarriedWomanExpression() {
    std::shared_ptr<Expression> julie = std::make_shared<TerminalExpression>("Julie");
    std::shared_ptr<Expression> married = std::make_shared<TerminalExpression>("Married");
    return std::make_shared<AndExpression>(julie, married);
}
int main(int argc, char const* argv[]) {
    std::shared_ptr<Expression> is_male = GetMaleExpression();
    std::shared_ptr<Expression> is_married_woman = GetMarriedWomanExpression();

    std::cout << "John is male? " << is_male->Interpret("John") << std::endl;
    std::cout << "Julie is a married women? " << is_married_woman->Interpret("Married Julie") << std::endl;

    return 0;
}
