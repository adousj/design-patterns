#include "Singleton.h"
#include <iostream>

Singleton* Singleton::INSTANCE = nullptr;

Singleton::Singleton()
{}

Singleton::~Singleton()
{}

Singleton* Singleton::getInstance()
{
  if(nullptr == INSTANCE)
  {
    INSTANCE = new Singleton();
  }

  return INSTANCE;
}

void Singleton::singletonOperation()
{
  std::cout << "Singleton::singletonOperation" << std::endl;
}
