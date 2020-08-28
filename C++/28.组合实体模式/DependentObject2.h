/**
 * @file DependentObject2.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef DEPENDENT_OBJECT2_H_
#define DEPENDENT_OBJECT2_H_

#include <string>

class DependentObject2 {
   public:
    DependentObject2() = default;
    ~DependentObject2() = default;

    void SetData(std::string data) { data_ = data; }

    std::string GetData() { return data_; }

   private:
    std::string data_;
};

#endif  // DEPENDENT_OBJECT2_H_
