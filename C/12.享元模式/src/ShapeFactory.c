/**
 * @file ShapeFactory.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ShapeFactory.h"

#include <pthread.h>
#include <stdio.h>
#include <string.h>

#include "CircleInternal.h"
#include "CircleStruct.h"
#include "list.h"

static List* circle_list = NULL;
static pthread_once_t g_create_once = PTHREAD_ONCE_INIT;

static bool match_func(int64_t a, int64_t b) {
    Circle* circle_a = (Circle*)a;
    Circle* circle_b = (Circle*)b;
    return (0 == strcasecmp(circle_a->color, circle_b->color));
}

static void create_circle_list(void) {
    circle_list = list_create();
    circle_list->match_func = match_func;
}

Circle* shape_factory_get_circle(const char* color) {
    pthread_once(&g_create_once, create_circle_list);
    static Circle circle_to_find;
    circle_to_find.color = color;

    Circle* result = NULL;
    ListNode* circle_node = list_find(circle_list, (int64_t)&circle_to_find);
    if (NULL != circle_node) {
        result = (Circle*)circle_node->val;
    } else {
        result = circle_create(color);
        list_push_back(circle_list, list_node_new((int64_t)result));
        printf("Creating circle of color : %s\n", color);
    }
    return result;
}
