#pragma once

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command {
public:
    explicit ConcreteCommand(Receiver* receiver);
    virtual ~ConcreteCommand();

    virtual void execute();

private:
    Receiver* _receiver;
};
