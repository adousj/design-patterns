#include "ConcreteFlyweight.h"
#include <string>
#include <iostream>

ConcreteFlyweight::ConcreteFlyweight(std::string str)
    :_str(str)
{
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::operation()
{
    std::cout << id << ": ConcreteFlyweight::operation  " << _str << std::endl;
}
