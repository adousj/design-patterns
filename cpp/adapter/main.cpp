#include "Adaptee.h"
#include "Target.h"
#include "Adapter.h"

int main()
{
  Adaptee *adaptee = new Adaptee();
  Target* target = new Adapter(adaptee);
  target->request();
  target->request();

  return 0;
}
