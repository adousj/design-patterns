#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
    :state(0)
{
}

ConcreteSubject::~ConcreteSubject()
{
}

int ConcreteSubject::get_state()
{
    return state;
}

void ConcreteSubject::set_state(int n)
{
    state = n;
    notify();
}
