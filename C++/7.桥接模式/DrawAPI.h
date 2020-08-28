/**
 * @file DrawAPI.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef DRAW_API_H_
#define DRAW_API_H_

class DrawAPI {
   public:
    DrawAPI() = default;
    virtual ~DrawAPI() = default;
    virtual void DrawCircle(int radius, int x, int y) = 0;
};

#endif  // DRAW_API_H_
