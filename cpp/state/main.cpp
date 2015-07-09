#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include <memory>

int main()
{
    std::unique_ptr<Context> context{ new Context() };

    context->request();
    context->request();
    context->request();
    context->request();

    return 0;
}

