#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

ConcreteStateA* ConcreteStateA::INSTANCE = nullptr;

ConcreteStateA::ConcreteStateA()
{
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::handle(Context* context)
{
    std::cout << "This is ConcreteStateA" << std::endl;
    context->change_state(ConcreteStateB::getInstance());
}

ConcreteStateA* ConcreteStateA::getInstance()
{
    if(nullptr==INSTANCE) {
        INSTANCE = new ConcreteStateA();
    }

    return INSTANCE;
}
