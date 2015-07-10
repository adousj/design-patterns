#include "Context.h"
#include "Strategy.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include <memory>

int main()
{
    std::unique_ptr<Context> context{ new Context() };

    std::unique_ptr<Strategy> strategy{ new ConcreteStrategyA()};
    context->set_strategy(strategy.get());
    context->algorithm();

    strategy.reset(new ConcreteStrategyB());
    context->set_strategy(strategy.get());
    context->algorithm();

    return 0;
}
