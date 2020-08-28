/**
 * @file CompositeEntity.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COMPOSITE_ENTITY_H_
#define COMPOSITE_ENTITY_H_

#include "CoarseGrainedObject.h"

class CompositeEntity {
   public:
    CompositeEntity() { cgo_ = std::make_shared<CoarseGrainedObject>(); }
    ~CompositeEntity() = default;

    void SetData(std::string data1, std::string data2) { cgo_->SetData(data1, data2); }

    std::vector<std::string> GetData() { return cgo_->GetData(); }

   private:
    std::shared_ptr<CoarseGrainedObject> cgo_ = nullptr;
};

#endif  // COMPOSITE_ENTITY_H_
