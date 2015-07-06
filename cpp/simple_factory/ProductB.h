#pragma once

#include <iostream>
#include "IProduct.h"

class ProductB : public IProduct {
public:
  ProductB() {};
  ~ProductB() {};

  void use() {
    std::cout << "ProductB::use" << std::endl;
  };
};
