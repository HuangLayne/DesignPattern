/**
 * @file Target.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef TARGET_H_
#define TARGET_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Target Target;

Target* target_create(void);

void target_destroy(Target** target);

void target_execute(Target* target, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // TARGET_H_
