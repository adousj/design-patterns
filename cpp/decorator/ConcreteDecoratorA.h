#pragma once

#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorA : public Decorator {
public:
    explicit ConcreteDecoratorA(Component* component)
        :Decorator(component)
    {
    }

    virtual ~ConcreteDecoratorA()
    {
    }

    void addBehavior();
    virtual void operation();
};
