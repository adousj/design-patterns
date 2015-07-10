#pragma once

#include "Strategy.h"

class Context final {
public:
    Context();
    virtual ~Context();

    void algorithm();
    void set_strategy(Strategy* strategy);

private:
    Strategy* strategy;
};
