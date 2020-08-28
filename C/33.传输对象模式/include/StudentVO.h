/**
 * @file StudentVO.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_VO_H_
#define STUDENT_VO_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StudentVO StudentVO;

StudentVO* student_vo_create(const char* name, int roll_number);

void student_vo_destroy(StudentVO** student_vo);

void student_vo_free_func(StudentVO* student_vo);

const char* student_vo_get_name(StudentVO* student_vo);

void student_vo_set_name(StudentVO* student_vo, const char* name);

int student_vo_get_roll_number(StudentVO* student_vo);

void student_vo_set_roll_number(StudentVO* student_vo, int roll_number);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_VO_H_
