#pragma once

#include "Colleague.h"
#include <string>

class ConcreteColleagueA : public Colleague {
public:
    ConcreteColleagueA();
    virtual ~ConcreteColleagueA();

    virtual void sendmsg(int nWho, std::string str);
    virtual void receivemsg(std::string str);
};
