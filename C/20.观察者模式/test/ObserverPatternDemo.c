/**
 * @file ObserverPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>

#include "Subject.h"

int main(int argc, char const* argv[]) {
    Subject* subject = subject_create();

    Observer* hexa_observer = hexa_observer_create(subject);
    Observer* octal_observer = octal_observer_create(subject);
    Observer* binary_observer = binary_obbserver_create(subject);

    printf("First state change: 15\n");
    subject_set_state(subject, 15);
    printf("Second state change: 10\n");
    subject_set_state(subject, 10);

    subject_destroy(&subject);
    observer_destroy(&hexa_observer);
    observer_destroy(&octal_observer);
    observer_destroy(&binary_observer);
    return 0;
}
