#pragma once

#include "Mediator.h"
#include <string>

class Colleague {
public:
    Colleague()
        :_mediator(nullptr)
    {
    }

    virtual ~Colleague() {}

    virtual void receivemsg(std::string str) = 0;
    virtual void sendmsg(int toWho, std::string str) = 0;

    void setMediator(Mediator* mediator)
    {
        _mediator = mediator;
    }

protected:
    Mediator* _mediator;
};
