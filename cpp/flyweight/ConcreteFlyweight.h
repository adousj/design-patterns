#pragma once

#include "Flyweight.h"
#include <string>

class ConcreteFlyweight : public Flyweight {
public:
    explicit ConcreteFlyweight(std::string str);
    virtual ~ConcreteFlyweight();

    virtual void operation();

private:
    std::string _str;
};
