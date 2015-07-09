#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include <iostream>

Context::Context()
{
    state = ConcreteStateA::getInstance();
}

Context::~Context()
{
}

void Context::change_state(State* state)
{
    this->state = state;
}

void Context::request()
{
    std::cout << "A new request is coming...." << std::endl;
    state->handle(this);
}
