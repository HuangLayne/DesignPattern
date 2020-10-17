/**
 * @file log.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef LOG_H_
#define LOG_H_

#ifdef __cplusplus
extern "C" {
#endif

#define ERROR_OPEN_LOG_FILE -1000

typedef void (*LogCallback)(void *opaque, const void *log_buffer);

// 日志输出方式
typedef enum {
    LOG_MODE_NONE = 0,  // 不输出
    LOG_MODE_FILE,      // 写文件
    LOG_MODE_ANDROID,   // 导出到Android Logcat
    LOG_MODE_SCREEN,    // 输出到屏幕
    LOG_MODE_CALLBACK   // 回调形式
} LogMode;

// 日志级别
typedef enum {
    LOG_LEVEL_TRACE,
    LOG_LEVEL_DEBUG,
    LOG_LEVEL_VERBOSE,
    LOG_LEVEL_INFO,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_FATAL,
    LOG_LEVEL_PANIC,
    LOG_LEVEL_QUIET
} LogLevel;

/**
 * @brief 设置日志文件位置
 *
 * @param path : 日志文件位置
 * @return int : 返回值小于0，错误； 大于等于0，成功。
 */
int log_set_path(const char *path);

/**
 * @brief 设置日志输出方式
 *
 * @param mode : 日志输出方式
 */
void log_set_mode(const LogMode mode);

/**
 * @brief : 设置日志级别
 *
 * @param level : 日志级别
 */
void log_set_level(const LogLevel level);

/**
 * @brief 设置日志回调函数
 *
 * @param callback_function : 回调函数
 * @param opaque : opaque指针
 */
void log_set_callback(LogCallback callback_function, void *opaque);

/**
 * @brief 打印日志
 *
 * @param level 日志级别
 * @param filename 代码文件名
 * @param line 代码行
 * @param format 输出格式
 * @param ... 参数
 */
void log_print(const LogLevel level, const char *filename, const int line, const char *format, ...);

#define log_trace_priv(format, ...) log_print(LOG_LEVEL_TRACE, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_debug_priv(format, ...) log_print(LOG_LEVEL_DEBUG, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_verbose_priv(format, ...) log_print(LOG_LEVEL_VERBOSE, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_info_priv(format, ...) log_print(LOG_LEVEL_INFO, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_warning_priv(format, ...) log_print(LOG_LEVEL_WARNING, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_error_priv(format, ...) log_print(LOG_LEVEL_ERROR, __FILE__, __LINE__, format "%s", __VA_ARGS__)

#define log_fatal_priv(format, ...)                                               \
    do {                                                                          \
        log_print(LOG_LEVEL_FATAL, __FILE__, __LINE__, format "%s", __VA_ARGS__); \
    } while (0)

#define log_panic_priv(format, ...)                                               \
    do {                                                                          \
        log_print(LOG_LEVEL_PANIC, __FILE__, __LINE__, format "%s", __VA_ARGS__); \
    } while (0)

#define log_trace(...) log_trace_priv(__VA_ARGS__, "\n")
#define log_debug(...) log_debug_priv(__VA_ARGS__, "\n")
#define log_verbose(...) log_verbose_priv(__VA_ARGS__, "\n")
#define log_info(...) log_info_priv(__VA_ARGS__, "\n")
#define log_warning(...) log_warning_priv(__VA_ARGS__, "\n")
#define log_error(...) log_error_priv(__VA_ARGS__, "\n")
#define log_fatal(...) log_fatal_priv(__VA_ARGS__, "\n")
#define log_panic(...) log_panic_priv(__VA_ARGS__, "\n")

#ifdef __cplusplus
}
#endif
#endif  // LOG_H_
