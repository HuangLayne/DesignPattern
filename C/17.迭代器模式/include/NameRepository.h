/**
 * @file NameRepository.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef NAME_REPOSITORY_H_
#define NAME_REPOSITORY_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Container NameRepository;

NameRepository* name_repository_create(void);
void name_repository_destroy(NameRepository** name_repository);
struct Iterator* name_repository_get_iterator(NameRepository* name_repository);

#ifdef __cplusplus
}
#endif
#endif  // NAME_REPOSITORY_H_
