/**
 * @file thread.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-05-29
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef THREAD_H_
#define THREAD_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <pthread.h>
#include <stdlib.h>

/**
 * @brief 获取线程ID
 *
 */
#ifdef __linux__
#define getthreadid() syscall(__NR_gettid)
#else
inline static pid_t getthreadid() {
    uint64_t owner = 0;
    pthread_threadid_np(NULL, &owner);
    return (pid_t)owner;
}
#endif

#define THREAD_FILE_NAME_LENGTH 32
typedef enum { THREAD_PRIORITY_LOW, THREAD_PRIORITY_NORMAL, THREAD_PRIORITY_HIGH } ThreadPriority;

typedef struct Thread {
    pthread_t id;
    int (*func)(void *);
    void *data;
    char name[THREAD_FILE_NAME_LENGTH];
    int retval;
} Thread;

/**
 * @brief 创建线程
 *
 * @param thread
 * @param fn 线程运行的函数入口
 * @param data 自定义数据指针
 * @param name 线程名
 * @return Thread* 线程
 */
Thread *thread_create(Thread *thread, int (*fn)(void *), void *data, const char *name);

/**
 * @brief 设置线程级别
 *
 * @param priority 级别
 * @return int 0表示成功，-1表示失败
 */
int thread_set_priority(ThreadPriority priority);

/**
 * @brief 获取线程的pthread_id
 *
 * @param thread 线程
 * @return pthread_t pthread_id
 */
pthread_t thread_get_pthread_id(Thread *thread);

/**
 * @brief 等待线程结束，回收线程资源
 *
 * @param thread 线程
 * @param status
 */
void thread_wait(Thread *thread, int *status);

/**
 * @brief 分离线程，线程结束后，资源自动回收
 *
 * @param thread 线程
 */
void thread_detach(Thread *thread);

#ifdef __cplusplus
}
#endif
#endif  // THREAD_H_
