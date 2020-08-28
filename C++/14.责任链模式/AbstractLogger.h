/**
 * @file AbstractLogger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-13
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ABSTRACT_LOGGER_H_
#define ABSTRACT_LOGGER_H_
#include <memory>
#include <string>

enum LogLevel { LOG_INFO = 1, LOG_DEBUG, LOG_ERROR };

class AbstractLogger {
   public:
    AbstractLogger() = default;
    virtual ~AbstractLogger() = default;

    void SetNextLogger(std::shared_ptr<AbstractLogger> next_logger) { next_logger_ = next_logger; }

    void LogMessage(enum LogLevel level, std::string message) {
        if (level_ <= level) Write(message);
        if (nullptr != next_logger_) next_logger_->LogMessage(level, message);
    }

   protected:
    virtual void Write(std::string message) = 0;

   protected:
    enum LogLevel level_;
    std::shared_ptr<AbstractLogger> next_logger_;
};

#endif  // ABSTRACT_LOGGER_H_
