#if !defined(__ABSTRACT_FACTORY__)
#define __ABSTRACT_FACTORY__

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~Abstractory();

    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductA* createProductB() = 0;
}

#endif
