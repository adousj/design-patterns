#pragma once

#include "Subject.h"

class RealSubject : public Subject {
public:
    RealSubject();
    virtual ~RealSubject();

    virtual void request();
};
