/**
 * @file ShapeMaker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_MAKER_H_
#define SHAPE_MAKER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShapeMaker ShapeMaker;

ShapeMaker* shape_maker_create(void);
void shape_maker_destroy(ShapeMaker** shape_maker);
void shape_maker_draw_circle(ShapeMaker* shape_maker);
void shape_maker_draw_rectangle(ShapeMaker* shape_maker);
void shape_maker_draw_square(ShapeMaker* shape_maker);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_MAKER_H_
