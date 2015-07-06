#include <iostream>
#include "ConcreteBuilder.h"
#include "Product.h"

ConcreteBuilder::ConcreteBuilder() : product(nullptr)
{
  product = new Product();
}


ConcreteBuilder::~ConcreteBuilder()
{
  //product = nullptr;
}

void ConcreteBuilder::buildPartA()
{
  product->setPartA("part a");
}

void ConcreteBuilder::buildPartB()
{
  product->setPartB("part b");
}

void ConcreteBuilder::buildPartC()
{
  product->setPartC("part c");
}

Product* ConcreteBuilder::getResult()
{
  return product;
}
