#pragma once

#include "Component.h"

class Decorator : public Component {
public:
    explicit Decorator(Component* component) : _component(component)
    {
    };

    virtual ~Decorator()
    {
        delete _component;
    };

    virtual void operation()
    {
        _component->operation();
    };

private:
    Component* _component;
};
