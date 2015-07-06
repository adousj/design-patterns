#include "Singleton.h"

int main()
{
  Singleton *singleton = Singleton::getInstance();
  singleton->singletonOperation();

  return 0;
}
