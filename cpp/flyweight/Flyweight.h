#pragma once

class Flyweight {
public:
    Flyweight() {}
    virtual ~Flyweight() {};

    virtual void operation() = 0;

protected:
    static int Count;
    const int id = ++Count;
};

