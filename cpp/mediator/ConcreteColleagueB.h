#pragma once

#include "Colleague.h"
#include <string>

class ConcreteColleagueB : public Colleague {
public:
    ConcreteColleagueB();
    virtual ~ConcreteColleagueB();

    virtual void sendmsg(int nWho, std::string str);
    virtual void receivemsg(std::string str);
};
