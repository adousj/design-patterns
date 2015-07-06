#include <string>
#include "Product.h"
#include <iostream>

Product::Product() : partA(""), partB(""), partC("")
{
}

Product::~Product()
{
}

void Product::setPartA(std::string partA)
{
  this->partA = partA;
  std::cout << partA << std::endl;
}

void Product::setPartB(std::string partB)
{
  this->partB = partB;
  std::cout << partB << std::endl;
}

void Product::setPartC(std::string partC)
{
  this->partC = partC;
  std::cout << partC << std::endl;
}
