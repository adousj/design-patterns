#pragma once

class IProduct {
public:
  IProduct() {};
  virtual ~IProduct() = 0;

  virtual void use() = 0;
};
