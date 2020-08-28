/**
 * @file Meal.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MEAL_H_
#define MEAL_H_

#include <iostream>
#include <list>

#include "Item.h"

class Meal {
   public:
    Meal() = default;
    ~Meal() = default;

    void AddItem(std::shared_ptr<Item> item) { items.push_back(item); }
    void ShowItems() {
        for (auto &item : items) {
            std::shared_ptr<Packing> packing = item->PackingItem();
            std::cout << "Item : " << item->Name();
            std::cout << ", Packing : " << packing->Pack();
            std::cout << ", Price :" << item->Price() << std::endl;
        }
    }
    float GetCost() {
        float cost = 0.0f;
        for (auto const &item : items) {
            cost += item->Price();
        }
        return cost;
    }

   private:
    std::list<std::shared_ptr<Item>> items;
};

#endif  // MEAL_H_
