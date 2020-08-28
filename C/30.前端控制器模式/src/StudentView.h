/**
 * @file StudentView.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_VIEW_H_
#define STUDENT_VIEW_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StudentView StudentView;

StudentView* student_view_create(void);

void student_view_destroy(StudentView** student_view);

void student_view_show(StudentView* student_view);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_VIEW_H_
