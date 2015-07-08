#include <string>
#include "ConcreteColleagueA.h"
#include <iostream>

ConcreteColleagueA::ConcreteColleagueA()
{
}

ConcreteColleagueA::~ConcreteColleagueA()
{
}

void ConcreteColleagueA::sendmsg(int toWho, std::string str)
{
    std::cout << "send msg from colleagueA, to:" << toWho << std::endl;
    _mediator->operation(toWho, str);
}

void ConcreteColleagueA::receivemsg(std::string str)
{
    std::cout << "ConcreteColleagueA receive msg:" << str << std::endl;
}
