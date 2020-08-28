/**
 * @file DrawAPI.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef DRAW_API_H_
#define DRAW_API_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DrawAPI DrawAPI;

DrawAPI* red_circle_create(void);
DrawAPI* green_circle_create(void);
void draw_api_destroy(DrawAPI** draw_api);

#ifdef __cplusplus
}
#endif
#endif  // DRAW_API_H_
