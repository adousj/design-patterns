#pragma once

#include "State.h"
#include "Context.h"

class ConcreteStateA : public State {
public:
    virtual ~ConcreteStateA();

    virtual void handle(Context* context);
    static ConcreteStateA* getInstance();

private:
    ConcreteStateA();

    static ConcreteStateA* INSTANCE;
};
