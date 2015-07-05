#pragma once

#include "Component.h"
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    explicit ConcreteDecoratorB(Component* component)
        :Decorator(component)
    {
    }

    virtual ~ConcreteDecoratorB()
    {
    }

    void addBehavior();
    virtual void operation();
};
