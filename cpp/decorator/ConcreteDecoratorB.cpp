#include "ConcreteDecoratorB.h"
#include "Decorator.h"
#include <iostream>

/*
ConcreteDecoratorB::ConcreteDecoratorB()
{
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{
}
*/

void ConcreteDecoratorB::addBehavior()
{
    std::cout << "ConcreteDecoratorB::addBehavior" << std::endl;
}

void ConcreteDecoratorB::operation()
{
    Decorator::operation();
    addBehavior();
}
