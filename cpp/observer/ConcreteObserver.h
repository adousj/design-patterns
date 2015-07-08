#pragma once

#include "Observer.h"
#include "ConcreteSubject.h"
#include <string>

class ConcreteObserver : public Observer {
public:
    explicit ConcreteObserver(std::string str);
    virtual ~ConcreteObserver();

    virtual void update();

private:
    std::string name;
};
