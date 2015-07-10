#include "ConcreteStrategyB.h"
#include <iostream>

ConcreteStrategyB::ConcreteStrategyB()
{
}

ConcreteStrategyB::~ConcreteStrategyB()
{
    //std::cout << "ConcreteStrategyB::~ConcreteStrategyB" << std::endl;
}

void ConcreteStrategyB::algorithm()
{
    std::cout << "ConcreteStrategyB::algorithm" << std::endl;
}
