#pragma once

#include <vector>
#include "Observer.h"

class Subject {
public:
    Subject();
    virtual ~Subject();

    void attach(Observer*);
    void detach(Observer*);
    void notify();

private:
    std::vector<Observer*> observers;
};

