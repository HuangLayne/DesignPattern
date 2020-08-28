/**
 * @file DependentObject1.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef DEPENDENT_OBJECT1_H_
#define DEPENDENT_OBJECT1_H_

#include <string>

class DependentObject1 {
   public:
    DependentObject1() = default;
    ~DependentObject1() = default;

    void SetData(std::string data) { data_ = data; }

    std::string GetData() { return data_; }

   private:
    std::string data_;
};

#endif  // DEPENDENT_OBJECT1_H_
