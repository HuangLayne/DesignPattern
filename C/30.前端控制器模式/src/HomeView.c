/**
 * @file HomeView.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "HomeView.h"

#include <stdio.h>

#include "ctools.h"

struct HomeView {};

HomeView* home_view_create(void) {
    HomeView* home_view = (HomeView*)calloc(1, sizeof(HomeView));
    return home_view;
}

void home_view_destroy(HomeView** home_view) {
    if (NULL == home_view || NULL == *home_view) return;
    freep((void**)home_view);
}

void home_view_show(HomeView* home_view) { printf("Displaying Home Page\n"); }
