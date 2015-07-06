#include "Facade.h"
#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"


Facade::Facade()
{
    system_a = new SystemA();
    system_b = new SystemB();
    system_c = new SystemC();
}

Facade::~Facade()
{
    delete system_a;
    delete system_b;
    delete system_c;
}

void Facade::wrapOperation()
{
    system_a->operationA();
    system_b->operationB();
    system_c->operationC();
}
