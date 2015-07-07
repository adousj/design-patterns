#include "Subject.h"
#include "Proxy.h"
#include "RealSubject.h"
#include <iostream>

Proxy::Proxy()
{
    real_subject = new RealSubject();
}

Proxy::~Proxy()
{
    delete real_subject;
}

void Proxy::request()
{
    beforeRequest();
    real_subject->request();
    afterRequest();
}

void Proxy::beforeRequest()
{
    std::cout << "Proxy::beforeRequest" << std::endl;
}

void Proxy::afterRequest()
{
    std::cout << "Proxy::afterRequest" << std::endl;
}
