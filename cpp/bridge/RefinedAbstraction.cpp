#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include <iostream>

RefinedAbstraction::RefinedAbstraction(Implementor* imp)
    :Abstraction(imp)
{
}

RefinedAbstraction::~RefinedAbstraction()
{
}

void RefinedAbstraction::operation()
{
    pImp->operationImp();
}
