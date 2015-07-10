#include "Context.h"

Context::Context()
{
}

Context::~Context()
{
}

void Context::algorithm()
{
    if(nullptr == strategy) {
        return;
    }

    strategy->algorithm();
}

void Context::set_strategy(Strategy* strategy)
{
    this->strategy = strategy;
}

