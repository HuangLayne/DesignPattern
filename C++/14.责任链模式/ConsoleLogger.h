/**
 * @file ConsoleLogger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-13
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CONSOLE_LOGGER_H_
#define CONSOLE_LOGGER_H_

#include <iostream>

#include "AbstractLogger.h"
class ConsoleLogger : public AbstractLogger {
   public:
    ConsoleLogger(const enum LogLevel level) { level_ = level; }
    virtual ~ConsoleLogger() = default;

   protected:
    void Write(std::string message) override { std::cout << "Standard Console::Logger: " << message << std::endl; }
};

#endif  // CONSOLE_LOGGER_H_
