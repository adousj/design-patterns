#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
#include <iostream>

ConcreteObserver::ConcreteObserver(std::string str)
    : name(str)
{
}

ConcreteObserver::~ConcreteObserver()
{
}

void ConcreteObserver::update()
{
    std::cout << name << " observer is updated." << std::endl;
}
