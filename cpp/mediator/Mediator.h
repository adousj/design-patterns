#pragma once

#include <string>
#include "Colleague.h"

class Colleague;

class Mediator {
public:
    Mediator() {}
    virtual ~Mediator() {}

    virtual void operation(int nWho, std::string str) = 0;
    virtual void registered(int nWho, Colleague* colleague) = 0;
};
