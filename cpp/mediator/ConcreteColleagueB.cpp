#include <string>
#include "ConcreteColleagueB.h"
#include <iostream>

ConcreteColleagueB::ConcreteColleagueB()
{
}

ConcreteColleagueB::~ConcreteColleagueB()
{
}

void ConcreteColleagueB::sendmsg(int toWho, std::string str)
{
    std::cout << "send msg from colleagueB, to:" << toWho << std::endl;
    _mediator->operation(toWho, str);
}

void ConcreteColleagueB::receivemsg(std::string str)
{
    std::cout << "ConcreteColleagueB receive msg:" << str << std::endl;
}
