#pragma once

#include "Abstraction.h"
#include "Implementor.h"

class RefinedAbstraction :public Abstraction {
public:
    explicit RefinedAbstraction(Implementor* imp);
    virtual ~RefinedAbstraction();

    virtual void operation();
};
