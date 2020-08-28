/**
 * @file BinaryObserver.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ObserverStruct.h"
#include "Subject.h"
#include "ctools.h"

static void dec_to_bin(int num, char* buffer) {
    if (num > 0) {
        dec_to_bin(num / 2, buffer + 1);
        *buffer = (char)(num % 2 + 48);
    }
}

static void update(struct Observer* observer) {
    if (NULL == observer) return;
    char bin[20] = {0};
    dec_to_bin(subject_get_state(observer->subject), bin);
    printf("Binary String: %s\n", bin);
}

struct Observer* binary_obbserver_create(struct Subject* subject) {
    struct Observer* observer = (struct Observer*)calloc(1, sizeof(struct Observer));
    if (NULL == observer) return NULL;

    observer->subject = subject;
    observer->update = update;
    subject_attach(subject, observer);
    return observer;
}
