#include "Command.h"
#include "Invoker.h"
#include <iostream>

Invoker::Invoker(Command* command)
    :_command(command)
{
}

Invoker::~Invoker()
{
}

void Invoker::call()
{
    std::cout << "invoker calling" << std::endl;
    _command->execute();
}
