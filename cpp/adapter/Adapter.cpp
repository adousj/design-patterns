#include "Adapter.h"
#include "Adaptee.h"

Adapter::Adapter(Adaptee *adaptee)
	: Target(adaptee)
{
	this->m_pAdaptee = adaptee;
}

Adapter::~Adapter()
{
}

void Adapter::request()
{
	m_pAdaptee->specialRequest();
}

