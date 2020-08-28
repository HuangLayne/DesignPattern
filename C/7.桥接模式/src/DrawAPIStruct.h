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

struct DrawAPI {
    void *priv;

    void (*draw_circle)(struct DrawAPI *, int radius, int x, int y);
    void (*destroy)(struct DrawAPI *);
};
