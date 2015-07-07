#include "Receiver.h"
#include "Command.h"
#include "ConcreteCommand.h"
#include "Invoker.h"

int main()
{
    Receiver* receiver = new Receiver();
    ConcreteCommand* command = new ConcreteCommand(receiver);
    Invoker* invoker = new Invoker(command);
    invoker->call();

    delete receiver;
    delete command;
    delete invoker;

    return 0;
}

