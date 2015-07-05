#pragma once

#include "Implementor.h"

class Abstraction {
public:
    Abstraction(Implementor* imp);
    virtual ~Abstraction();

    virtual void operation() = 0;

protected:
    Implementor* pImp;
};
