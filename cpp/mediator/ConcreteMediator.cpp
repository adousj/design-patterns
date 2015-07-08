#include "Colleague.h"
#include "ConcreteMediator.h"
#include <map>
#include <string>
#include <iostream>

ConcreteMediator::ConcreteMediator()
{
}

ConcreteMediator::~ConcreteMediator()
{
}

void ConcreteMediator::operation(int nWho, std::string str)
{
    std::map<int, Colleague*>::const_iterator it = colleague_map.find(nWho);
    if(it == colleague_map.end()) {
        std::cout << "not found this colleague!" << std::endl;
        return;
    }
    Colleague* pc = it->second;
    pc->receivemsg(str);
}

void ConcreteMediator::registered(int nWho, Colleague* colleague)
{
    std::map<int, Colleague*>::const_iterator it = colleague_map.find(nWho);
    if(it == colleague_map.end()) {
        colleague_map.insert(std::make_pair(nWho, colleague));
        colleague->setMediator(this);
    }
}
