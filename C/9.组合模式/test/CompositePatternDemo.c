/**
 * @file CompositePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdlib.h>

#include "Employee.h"

static void show_employee(Employee *employee) {
    employee_show(employee);
    List *subordinates = employee_get_subordinates(employee);
    if (NULL != subordinates) {
        ListIterator *it = list_iterator_new(subordinates, LIST_HEAD);
        ListNode *node;
        while ((node = list_iterator_next(it))) {
            Employee *employee = (Employee *)node->val;
            show_employee(employee);
        }
        list_iterator_destroy(it);
    }
}

int main(int argc, char const *argv[]) {
    Employee *ceo = employee_create("John", "CEO", 30000);

    Employee *head_sales = employee_create("Robert", "Head Sales", 20000);
    Employee *head_marketing = employee_create("Michel", "Head Marketing", 20000);

    Employee *clerk1 = employee_create("Laura", "Marketing", 10000);
    Employee *clerk2 = employee_create("Bob", "Marketing", 10000);

    Employee *sales_executive1 = employee_create("Richard", "Sales", 10000);
    Employee *sales_executive2 = employee_create("Rob", "Sales", 10000);

    employee_add(ceo, head_sales);
    employee_add(ceo, head_marketing);

    employee_add(head_sales, sales_executive1);
    employee_add(head_sales, sales_executive2);

    employee_add(head_marketing, clerk1);
    employee_add(head_marketing, clerk2);

    //打印该组织的所有员工
    show_employee(ceo);

    employee_destroy(&ceo);
    employee_destroy(&head_sales);
    employee_destroy(&head_marketing);
    employee_destroy(&clerk1);
    employee_destroy(&clerk2);
    employee_destroy(&sales_executive1);
    employee_destroy(&sales_executive2);
    return 0;
}
