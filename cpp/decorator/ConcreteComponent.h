#pragma once

#include "Component.h"

class ConcreteComponent : public Component {
public:
    ConcreteComponent() {}
    virtual ~ConcreteComponent() {}

    virtual void operation();
};
