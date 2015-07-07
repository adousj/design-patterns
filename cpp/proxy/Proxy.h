#pragma once

#include "Subject.h"

class Proxy : public Subject {
public:
    Proxy();
    virtual ~Proxy();

    virtual void request();

private:
    void beforeRequest();
    void afterRequest();

    Subject* real_subject;
};
