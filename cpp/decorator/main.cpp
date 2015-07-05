#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"


int main(int argc, char const* argv[])
{
    Component* component = new ConcreteDecoratorB(new ConcreteDecoratorA(new ConcreteComponent()));
    component->operation();

    return 0;
}
