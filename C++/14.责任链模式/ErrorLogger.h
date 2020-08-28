/**
 * @file ErrorLogger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-13
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ERROR_LOGGER_H_
#define ERROR_LOGGER_H_

#include <iostream>

#include "AbstractLogger.h"

class ErrorLogger : public AbstractLogger {
   public:
    ErrorLogger(const enum LogLevel level) { level_ = level; }
    virtual ~ErrorLogger() = default;

    void Write(std::string message) override { std::cout << "Error Console::Logger: " << message << std::endl; }
};

#endif  // ERROR_LOGGER_H_
