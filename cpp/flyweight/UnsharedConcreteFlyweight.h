#pragma once

class UnsharedConcreteFlyweight : public Flyweight {
public:
    UnsharedConcreteFlyweight() {}
    virtual ~UnsharedConcreteFlyweight() {}

    virtual void operation() {}

private:
    int allState;
};
