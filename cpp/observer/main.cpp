#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main()
{
    ConcreteObserver* ob1 = new ConcreteObserver("ob1");
    ConcreteObserver* ob2 = new ConcreteObserver("ob2");
    ConcreteObserver* ob3 = new ConcreteObserver("ob3");

    ConcreteSubject* subject = new ConcreteSubject();
    subject->attach(ob1);
    subject->attach(ob2);
    subject->attach(ob3);

    subject->set_state(3);

    return 0;
}

