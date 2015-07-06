#pragma once

#include <string>

class Product
{
public:
  Product();
  virtual ~Product();

  void setPartA(std::string partA);
  void setPartB(std::string partB);
  void setPartC(std::string partC);

private:
  std::string partA;
  std::string partB;
  std::string partC;
};
