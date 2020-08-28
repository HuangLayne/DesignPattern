/**
 * @file ChainPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-13
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ConsoleLogger.h"
#include "ErrorLogger.h"
#include "FileLogger.h"

std::shared_ptr<AbstractLogger> GetChainOfLoggers() {
    std::shared_ptr<AbstractLogger> error_logger = std::make_shared<ErrorLogger>(LOG_ERROR);
    std::shared_ptr<AbstractLogger> file_logger = std::make_shared<FileLogger>(LOG_DEBUG);
    std::shared_ptr<AbstractLogger> console_logger = std::make_shared<ConsoleLogger>(LOG_INFO);

    error_logger->SetNextLogger(file_logger);
    file_logger->SetNextLogger(console_logger);
    return error_logger;
}

int main(int argc, char const *argv[]) {
    std::shared_ptr<AbstractLogger> logger_chain = GetChainOfLoggers();
    logger_chain->LogMessage(LOG_INFO, "This is an information.");
    logger_chain->LogMessage(LOG_DEBUG, "This is a debug level information.");
    logger_chain->LogMessage(LOG_ERROR, "This is an error information.");
    return 0;
}
