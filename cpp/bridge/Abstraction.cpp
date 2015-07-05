#include "Implementor.h"
#include "Abstraction.h"

Abstraction::Abstraction(Implementor* imp)
    :pImp(imp)
{
}

Abstraction::~Abstraction()
{
    delete pImp;
}
