#include <vector>
#include "Observer.h"
#include "Subject.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::attach(Observer* observer)
{
    observers.push_back(observer);
}

void Subject::detach(Observer* observer)
{
    for(std::vector<Observer*>::iterator it=observers.begin(); it!=observers.end(); it++) {
        if(*it == observer) {
            observers.erase(it);
        }
    }
}
void Subject::notify()
{
    for(auto &i : observers) {
        i->update();
    }
}
