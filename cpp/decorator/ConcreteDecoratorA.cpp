#include "ConcreteDecoratorA.h"
#include "Decorator.h"
#include <iostream>

/*
ConcreteDecoratorA::ConcreteDecoratorA()
{
}

ConcreteDecoratorA::~ConcreteDecoratorA()
{
}
*/

void ConcreteDecoratorA::addBehavior()
{
    std::cout << "ConcreteDecoratorA::addBehavior" << std::endl;
}

void ConcreteDecoratorA::operation()
{
    Decorator::operation();
    addBehavior();
}
