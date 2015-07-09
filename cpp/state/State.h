#pragma once

class Context;

class State {
public:
    State() {}
    virtual ~State() {}

    virtual void handle(Context* context) = 0;
};
