/**
 * @file Computer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ComputerPart.h"
#include "ComputerPartStruct.h"
#include "ComputerPartVisitor.h"
#include "ctools.h"

typedef struct {
    struct ComputerPart* parts[3];
} priv_t;

extern struct ComputerPart* computer_part_create_keyboard(void);
extern struct ComputerPart* computer_part_create_monitor(void);
extern struct ComputerPart* computer_part_create_mouse(void);

static bool init(struct ComputerPart* computer_part) {
    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    if (NULL == priv) return false;

    priv->parts[0] = computer_part_create_mouse();
    priv->parts[1] = computer_part_create_keyboard();
    priv->parts[2] = computer_part_create_monitor();

    computer_part->priv = priv;
    return true;
}

static void destroy(struct ComputerPart* computer_part) {
    if (NULL == computer_part || NULL == computer_part->priv) return;
    priv_t* priv = (priv_t*)computer_part->priv;
    for (int i = 0; i < 3; ++i) {
        if (NULL != priv->parts[i]) {
            if (NULL != priv->parts[i]->destroy) {
                priv->parts[i]->destroy(priv->parts[i]);
            }
            free(priv->parts[i]);
        }
    }
    freep((void**)&computer_part->priv);
}

static void accept(struct ComputerPart* computer_part, struct ComputerPartVisitor* computer_part_visitor) {
    priv_t* priv = (priv_t*)computer_part->priv;
    for (int i = 0; i < 3; ++i) {
        if (NULL != priv->parts[i] && NULL != priv->parts[i]->accept) {
            priv->parts[i]->accept(priv->parts[i], computer_part_visitor);
        }
    }
    computer_part_visitor_visit_computer(computer_part_visitor, computer_part);
}

struct ComputerPart* computer_part_create_computer(void) {
    struct ComputerPart* computer_part = (struct ComputerPart*)calloc(1, sizeof(struct ComputerPart));
    if (NULL == computer_part) return NULL;

    init(computer_part);
    computer_part->accept = accept;
    computer_part->destroy = destroy;
    return computer_part;
}
