/**
 * @file Person.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Person.h"

#include "ctools.h"

struct Person {
    char* name;
    char* gender;
    char* marital_status;
};

Person* person_create(const char* name, const char* gender, const char* marital_status) {
    Person* person = (Person*)calloc(1, sizeof(Person));
    if (NULL == person) return NULL;

    person->name = cstrdup(name);
    person->gender = cstrdup(gender);
    person->marital_status = cstrdup(marital_status);

    return person;
}

void person_destory(Person* person) {
    if (NULL == person) return;

    freep((void**)&person->name);
    freep((void**)&person->gender);
    freep((void**)&person->marital_status);
    freep((void**)&person);
}

const char* person_get_name(Person* person) { return (NULL == person) ? NULL : person->name; }

const char* person_get_gender(Person* person) { return (NULL == person) ? NULL : person->gender; }

const char* person_get_marital_status(Person* person) { return (NULL == person) ? NULL : person->marital_status; }
