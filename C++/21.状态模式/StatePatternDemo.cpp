/**
 * @file StatePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>

#include "Context.h"
#include "StartState.h"
#include "StopState.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Context> context = std::make_shared<Context>();

    std::shared_ptr<StartState> start_state = std::make_shared<StartState>();
    start_state->DoAction(context);

    std::cout << context->GetState()->ToString() << std::endl;

    std::shared_ptr<StopState> stop_state = std::make_shared<StopState>();
    stop_state->DoAction(context);

    std::cout << context->GetState()->ToString() << std::endl;
    return 0;
}

// g++ -std=c++11 -g StatePatternDemo.cpp StartState.cpp StopState.cpp Context.cpp -o StatePatternDemo
