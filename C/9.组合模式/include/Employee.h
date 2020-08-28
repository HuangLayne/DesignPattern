/**
 * @file Employee.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "list.h"

typedef struct Employee Employee;

Employee* employee_create(const char* name, const char* dept, int salary);
void employee_destroy(Employee** employee);
void employee_add(Employee* employee, Employee* subordinate);
void employee_remove(Employee* employee, Employee* subordinate);
List* employee_get_subordinates(Employee* employee);
void employee_show(Employee* employee);

#ifdef __cplusplus
}
#endif
#endif  // EMPLOYEE_H_
