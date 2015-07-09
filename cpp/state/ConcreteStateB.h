#pragma once

#include "State.h"
#include "Context.h"

class ConcreteStateB : public State {
public:
    virtual ~ConcreteStateB();

    virtual void handle(Context* context);
    static ConcreteStateB* getInstance();

private:
    ConcreteStateB();

    static ConcreteStateB* INSTANCE;
};
