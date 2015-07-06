#pragma once

#include <iostream>

class SystemC {
public:
    SystemC() {}
    virtual ~SystemC() {}

    void operationC()
    {
        std::cout << "SystemC::operationC" << std::endl;
    }
};
