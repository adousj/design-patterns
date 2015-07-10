#include "ConcreteStrategyA.h"
#include <iostream>

ConcreteStrategyA::ConcreteStrategyA()
{
}

ConcreteStrategyA::~ConcreteStrategyA()
{
    //std::cout << "ConcreteStrategyA::~ConcreteStrategyA" << std::endl;
}

void ConcreteStrategyA::algorithm()
{
    std::cout << "ConcreteStrategyA::algorithm" << std::endl;
}
