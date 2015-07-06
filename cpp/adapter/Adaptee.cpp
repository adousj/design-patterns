#include "Adaptee.h"
#include <iostream>

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::specialRequest()
{
	std::cout << "Adaptee::specialRequest" << std::endl;
}
