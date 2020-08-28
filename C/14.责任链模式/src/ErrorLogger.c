/**
 * @file ErrorLogger.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "LoggerStruct.h"
#include "ctools.h"

static void write(struct Logger* logger, const char* message) { printf("Error Console::Logger: %s\n", message); }

struct Logger* error_logger_create(int level) {
    struct Logger* logger = (struct Logger*)calloc(1, sizeof(struct Logger));
    if (NULL == logger) return NULL;

    logger->level = level;
    logger->log_message = logger_log_message_default;
    logger->set_next_logger = logger_set_next_logger_default;
    logger->write = write;
    return logger;
}
