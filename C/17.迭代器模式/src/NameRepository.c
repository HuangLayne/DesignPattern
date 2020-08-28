/**
 * @file NameRepository.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "NameRepository.h"

#include "ContainerStruct.h"
#include "IteratorStruct.h"
#include "ctools.h"

static const char* names[] = {"Robert", "John", "Julie", "Lora"};

typedef struct IteratorPriv {
    int index;
} IteratorPriv;

static bool iterator_has_next(struct Iterator* iterator) {
    if (NULL == iterator) return false;
    IteratorPriv* priv = iterator->priv;
    return priv->index < sizeof(names) / sizeof(const char*);
}

static const char* iterator_next(struct Iterator* iterator) {
    if (NULL == iterator) return NULL;
    if (iterator_has_next(iterator)) {
        IteratorPriv* priv = iterator->priv;
        return names[priv->index++];
    } else {
        return NULL;
    }
}

static void iterator_destroy(struct Iterator* iterator) {
    if (NULL == iterator) return;
    freep((void**)&iterator->priv);
}

static struct Iterator* name_iterator_create(void) {
    struct Iterator* iterator = (struct Iterator*)calloc(1, sizeof(struct Iterator));
    if (NULL == iterator) return NULL;

    iterator->has_next = iterator_has_next;
    iterator->next = (void* (*)(struct Iterator*))iterator_next;
    iterator->destroy = iterator_destroy;

    IteratorPriv* priv = (IteratorPriv*)calloc(1, sizeof(IteratorPriv));
    iterator->priv = priv;
    return iterator;
}

static void container_destroy(struct Container* container) {
    if (NULL == container) return;
    freep((void**)&container->priv);
}

struct Iterator* name_repository_get_iterator(NameRepository* name_repository) {
    return name_iterator_create();
}

NameRepository* name_repository_create(void) {
    NameRepository* name_repository = (NameRepository*)calloc(1, sizeof(NameRepository));
    if (NULL == name_repository) return NULL;

    name_repository->get_iterator = name_repository_get_iterator;
    name_repository->destroy = container_destroy;

    return name_repository;
}

void name_repository_destroy(NameRepository** name_repository) {
    if (NULL == name_repository || NULL == *name_repository) return;
    if (NULL != (*name_repository)->destroy) {
        (*name_repository)->destroy(*name_repository);
    }
    freep((void**)name_repository);
}
