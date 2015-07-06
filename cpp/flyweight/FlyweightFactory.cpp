#include <string>
#include <map>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

Flyweight* FlyweightFactory::getFlyweight(std::string name)
{
    std::map<std::string, Flyweight*>::iterator it = mpFlyweight.find(name);
    if(it != mpFlyweight.end()) {
        return it->second;
    } else {
        Flyweight* fw = new ConcreteFlyweight(name);
        mpFlyweight.insert(std::make_pair(name, fw));
        return fw;
    }
}
