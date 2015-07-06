#pragma once

#include <iostream>

class SystemB {
public:
    SystemB() {}
    virtual ~SystemB() {}

    void operationB()
    {
        std::cout << "SystemB::operationB" << std::endl;
    }
};
