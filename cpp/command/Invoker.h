#pragma once

#include "Command.h"

class Invoker {
public:
    explicit Invoker(Command* command);
    virtual ~Invoker();

    virtual void call();

private:
    Command* _command;
};
