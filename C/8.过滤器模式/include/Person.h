/**
 * @file Person.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef PERSON_H_
#define PERSON_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Person Person;

Person* person_create(const char* name, const char* gender, const char* marital_status);
void person_destory(Person* person);
const char* person_get_name(Person* person);
const char* person_get_gender(Person* person);
const char* person_get_marital_status(Person* person);

#ifdef __cplusplus
}
#endif
#endif  // PERSON_H_
