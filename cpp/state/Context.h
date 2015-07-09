#pragma once

class State;

class Context final {
public:
    Context();
    virtual ~Context();

    void change_state(State* state);
    void request();

private:
    State* state;
};
