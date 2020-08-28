/**
 * @file ChainPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Logger.h"

int main(int argc, char const* argv[]) {
    Logger* error_logger = error_logger_create(LEVEL_ERROR);
    Logger* file_logger = file_logger_create(LEVEL_DEBUG);
    Logger* console_logger = console_logger_create(LEVEL_INFO);

    logger_set_next_logger(error_logger, file_logger);
    logger_set_next_logger(file_logger, console_logger);

    logger_log_message(error_logger, LEVEL_INFO, "This is an information.");
    logger_log_message(error_logger, LEVEL_DEBUG, "This is a debug level information.");
    logger_log_message(error_logger, LEVEL_ERROR, "This is an error information.");

    logger_destroy(&error_logger);
    logger_destroy(&file_logger);
    logger_destroy(&console_logger);

    return 0;
}
