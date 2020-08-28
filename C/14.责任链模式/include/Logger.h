/**
 * @file Logger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Logger Logger;

enum LoggerLevel { LEVEL_INFO = 1, LEVEL_DEBUG, LEVEL_ERROR };

Logger* console_logger_create(enum LoggerLevel level);
Logger* error_logger_create(enum LoggerLevel level);
Logger* file_logger_create(enum LoggerLevel level);
void logger_destroy(Logger** logger);
void logger_set_next_logger(Logger* logger, Logger* next_logger);
void logger_log_message(Logger* logger, enum LoggerLevel level, const char* message);

#ifdef __cplusplus
}
#endif
#endif  // LOGGER_H_
