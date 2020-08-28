/**
 * @file Client.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <iostream>

#include "CompositeEntity.h"
class Client {
   public:
    Client() { composite_entity_ = std::make_shared<CompositeEntity>(); }
    ~Client() = default;

    void PrintData() {
        std::vector<std::string> result = composite_entity_->GetData();
        for (int i = 0; i < result.size(); i++) {
            std::cout << "Data: " + result[i] << std::endl;
        }
    }

    void SetData(std::string data1, std::string data2) { composite_entity_->SetData(data1, data2); }

   private:
    std::shared_ptr<CompositeEntity> composite_entity_ = nullptr;
};

#endif  // CLIENT_H_
