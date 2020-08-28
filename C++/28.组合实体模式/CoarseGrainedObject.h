/**
 * @file CoarseGrainedObject.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COARSE_GRAINED_OBJECT_H_
#define COARSE_GRAINED_OBJECT_H_

#include <memory>
#include <vector>

#include "DependentObject1.h"
#include "DependentObject2.h"

class CoarseGrainedObject {
   public:
    CoarseGrainedObject() {
        do1_ = std::make_shared<DependentObject1>();
        do2_ = std::make_shared<DependentObject2>();
    }
    ~CoarseGrainedObject() = default;

    void SetData(std::string data1, std::string data2) {
        do1_->SetData(data1);
        do2_->SetData(data2);
    }

    std::vector<std::string> GetData() {
        std::vector<std::string> result;
        result.push_back(do1_->GetData());
        result.push_back(do2_->GetData());
        return result;
    }

   private:
    std::shared_ptr<DependentObject1> do1_;
    std::shared_ptr<DependentObject2> do2_;
};

#endif  // COARSE_GRAINED_OBJECT_H_
