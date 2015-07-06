#pragma once

#include <iostream>
#include "IProduct.h"

class ProductA : public IProduct {
public:
  ProductA() {};
  ~ProductA() {};

  void use() {
    std::cout << "ProductA::use" << std::endl;
  };
};
