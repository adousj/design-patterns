#pragma once

#include "Flyweight.h"
#include <string>
#include <map>

class FlyweightFactory {
public:
    FlyweightFactory();
    virtual ~FlyweightFactory();

    Flyweight* getFlyweight(std::string name);

private:
    std::map<std::string, Flyweight*> mpFlyweight;
};
