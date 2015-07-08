#pragma once

#include "Mediator.h"
#include "Colleague.h"
#include <map>
#include <string>

class ConcreteMediator : public Mediator {
public:
    ConcreteMediator();
    virtual ~ConcreteMediator();

    virtual void operation(int nWho, std::string str);
    virtual void registered(int nWho, Colleague* colleague);

private:
    std::map<int, Colleague*> colleague_map;
};
