/**
 * @file LoggerStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef LOGGER_STRUCT_H_
#define LOGGER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Logger {
    int level;
    struct Logger* next_logger;
    void* priv;

    void (*set_next_logger)(struct Logger* logger, struct Logger* next_logger);
    void (*log_message)(struct Logger* logger, int level, const char* message);
    void (*write)(struct Logger* logger, const char* message);
    void (*destroy)(struct Logger* logger);
};

void logger_set_next_logger_default(struct Logger* logger, struct Logger* next_logger);
void logger_log_message_default(struct Logger* logger, int level, const char* message);

#ifdef __cplusplus
}
#endif
#endif  // LOGGER_STRUCT_H_
