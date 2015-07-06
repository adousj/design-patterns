#pragma once

#include <cstddef>
#include <string>
#include <memory>

#include "IProduct.h"
#include "ProductA.h"
#include "ProductB.h"

class ProductFactory {
public:
  static IProduct* createProduct(std::string class_name) {
    if( "A" == class_name)
    {
      return new ProductA();
    }
    else if( "B" == class_name)
    {
      return new ProductB();
    }
    return NULL;
  };

private:
  ProductFactory() {};
  ~ProductFactory() {};
};
