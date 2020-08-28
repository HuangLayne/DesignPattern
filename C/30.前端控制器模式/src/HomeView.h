/**
 * @file HomeView.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef HOME_VIEW_H_
#define HOME_VIEW_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HomeView HomeView;

HomeView* home_view_create(void);

void home_view_destroy(HomeView** home_view);

void home_view_show(HomeView* home_view);

#ifdef __cplusplus
}
#endif
#endif  // HOME_VIEW_H_
