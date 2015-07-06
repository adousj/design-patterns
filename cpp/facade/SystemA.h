#pragma once

#include <iostream>

class SystemA {
public:
    SystemA() {}
    virtual ~SystemA() {}

    void operationA()
    {
        std::cout << "SystemA::operationA" << std::endl;
    }
};
