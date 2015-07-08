#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include "ConcreteMediator.h"

int main()
{
    ConcreteColleagueA* pa = new ConcreteColleagueA();
    ConcreteColleagueB* pb = new ConcreteColleagueB();
    ConcreteMediator* pm = new ConcreteMediator();
    pm->registered(1, pa);
    pm->registered(2, pb);

    pa->sendmsg(2, "hello, i am a");
    pb->sendmsg(1, "hello, i am b");

    pa->sendmsg(1, "hello, i am a");
    pb->sendmsg(2, "hello, i am b");

    delete pa;
    delete pb;
    delete pm;

    return 0;
}

