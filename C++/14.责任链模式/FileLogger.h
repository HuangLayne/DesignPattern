/**
 * @file FileLogger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-13
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FILE_LOGGER_H_
#define FILE_LOGGER_H_

#include <iostream>

#include "AbstractLogger.h"

class FileLogger : public AbstractLogger {
   public:
    FileLogger(const enum LogLevel level) { level_ = level; }
    virtual ~FileLogger() = default;

   protected:
    void Write(std::string message) override { std::cout << "File::Logger: " << message << std::endl; }
};

#endif  // FILE_LOGGER_H_
