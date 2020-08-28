/**
 * @file State.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef STATE_H_
#define STATE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Context Context;
typedef struct State State;

State* start_state_create(void);
State* stop_state_create(void);
void state_do_action(State* state, Context* context);
const char* state_to_string(State* state);
void state_destroy(State** state);

#ifdef __cplusplus
}
#endif
#endif  // STATE_H_
