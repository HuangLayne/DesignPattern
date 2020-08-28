/**
 * @file Logger.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-08
 *
 * @copyright Copyright (c) 2020
 *
 */
#include "Logger.h"

#include "LoggerStruct.h"
#include "ctools.h"

void logger_destroy(Logger** logger) {
    if (NULL == logger || NULL == *logger) return;
    if (NULL != (*logger)->destroy) (*logger)->destroy(*logger);

    freep((void**)logger);
}

void logger_set_next_logger(Logger* logger, Logger* next_logger) {
    if (NULL == logger) return;
    if (NULL != logger->set_next_logger) logger->set_next_logger(logger, next_logger);
}

void logger_log_message(Logger* logger, enum LoggerLevel level, const char* message) {
    if (NULL == logger) return;
    if (NULL != logger->log_message) logger->log_message(logger, level, message);
}
