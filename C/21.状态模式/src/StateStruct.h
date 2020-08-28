/**
 * @file StateStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STATESTRUT_H_
#define STATESTRUT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct State {
    void* priv;

    void (*do_action)(struct State* state, struct Context* context);
    const char* (*to_string)(struct State* state);
    void (*destroy)(struct State* state);
};

#ifdef __cplusplus
}
#endif
#endif  // STATESTRUT_H_
