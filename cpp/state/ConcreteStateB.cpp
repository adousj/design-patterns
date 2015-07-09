#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

ConcreteStateB* ConcreteStateB::INSTANCE = nullptr;

ConcreteStateB::ConcreteStateB()
{
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::handle(Context* context)
{
    std::cout << "This is ConcreteStateB" << std::endl;
    context->change_state(ConcreteStateA::getInstance());
}

ConcreteStateB* ConcreteStateB::getInstance()
{
    if(nullptr==INSTANCE) {
        INSTANCE = new ConcreteStateB();
    }

    return INSTANCE;
}
