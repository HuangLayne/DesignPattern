/**
 * @file Strategy.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_

class Strategy {
   public:
    Strategy() = default;
    virtual ~Strategy() = default;
    virtual int DoOperation(int num1, int num2) = 0;
};

#endif  // STRATEGY_H_
