#pragma once

#include "Product.h"
#include "Builder.h"

class Director
{
public:
  Director();
  virtual ~Director();

  Product* construct();
  void setBuilder(Builder* builder);

private:
  Builder* builder;
};
