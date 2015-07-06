#if !defined(__CONCRETE_FACTORY_1__)
#define __CONCRETE_FACTORY_1__

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class ConcreteFactory1 : public AbstracctFactory
{
public:
   ConcreteFactory1();
   virtual ~ConcreteFactory();

   virtual AbstractProductA* createProductA();
   virtual AbstractProductA* createProductB();
}

#endif
