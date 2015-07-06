#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"


ConcreteFactroy1::ConcreteFactroy1()
{}

ConcreteFactroy1::~ConcreteFactroy1()
{}


AbstractProductA* ConcreteFactroy1::createProductA()
{
  return new ProductA1();
}

AbstractProductA* ConcreteFactroy1::createProductB()
{
  return new ProductB1();
}

