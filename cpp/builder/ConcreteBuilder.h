#pragma once

#include <iostream>
#include "Product.h"
#include "Builder.h"

class ConcreteBuilder : public Builder
{
public:
  ConcreteBuilder();
  virtual ~ConcreteBuilder();

  void buildPartA();
  void buildPartB();
  void buildPartC();
  Product* getResult();

private:
  Product *product;
};
