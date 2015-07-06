#pragma once

#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade {
public:
    Facade();
    virtual ~Facade();

    void wrapOperation();

private:
    SystemA* system_a;
    SystemB* system_b;
    SystemC* system_c;
};
