#pragma once

#include "Subject.h"

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();
    virtual ~ConcreteSubject();

    int get_state();
    void set_state(int n);

private:
    int state;
};
