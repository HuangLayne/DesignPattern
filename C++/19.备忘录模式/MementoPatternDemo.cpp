/**
 * @file MementoPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "CareTaker.h"
#include "Originator.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Originator> originator = std::make_shared<Originator>();
    std::shared_ptr<CareTaker> care_taker = std::make_shared<CareTaker>();
    originator->SetState("State #1");
    originator->SetState("State #2");
    care_taker->Add(originator->SaveStateToMemento());
    originator->SetState("State #3");
    care_taker->Add(originator->SaveStateToMemento());
    originator->SetState("State #4");

    std::cout << "Current State: " << originator->GetState() << std::endl;
    originator->getStateFromMemento(care_taker->Get(0));
    std::cout << "First saved State: " << originator->GetState() << std::endl;
    originator->getStateFromMemento(care_taker->Get(1));
    std::cout << "Second saved State: " << originator->GetState() << std::endl;

    return 0;
}
