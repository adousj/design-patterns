#include "Director.h"
#include "Product.h"
#include "Builder.h"

Director::Director() : builder(nullptr)
{
}

Director::~Director()
{
}

Product* Director::construct()
{
  builder->buildPartA();
  builder->buildPartB();
  builder->buildPartC();
  return builder->getResult();
}

void Director::setBuilder(Builder* builder)
{
  this->builder = builder;
}
