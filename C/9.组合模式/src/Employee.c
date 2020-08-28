/**
 * @file Employee.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Employee.h"

#include <stdio.h>

#include "ctools.h"

struct Employee {
    char* name;
    char* dept;
    int salary;
    List* subordinates;
};

Employee* employee_create(const char* name, const char* dept, int salary) {
    Employee* employee = (Employee*)calloc(1, sizeof(Employee));
    if (NULL == employee) return NULL;

    employee->name = cstrdup(name);
    employee->dept = cstrdup(dept);
    employee->salary = salary;
    employee->subordinates = list_create();
    return employee;
}

void employee_destroy(Employee** employee) {
    if (NULL == employee || NULL == *employee) return;

    Employee* self = *employee;
    list_destroy(self->subordinates);
    freep((void**)&self->name);
    freep((void**)&self->dept);
    freep((void**)employee);
}

void employee_add(Employee* employee, Employee* subordinate) {
    if (NULL == employee || NULL == subordinate) return;
    list_push_back(employee->subordinates, list_node_new((int64_t)subordinate));
}

void employee_remove(Employee* employee, Employee* subordinate) {
    if (NULL == employee || NULL == subordinate) return;
    list_remove(employee->subordinates, list_node_new((int64_t)subordinate), false);
}

List* employee_get_subordinates(Employee* employee) { return (NULL == employee) ? NULL : employee->subordinates; }

void employee_show(Employee* employee) {
    if (NULL == employee) return;
    printf("Employee :[ Name : %s, dept : %s, salary :%d ]\n", employee->name, employee->dept, employee->salary);
}
