#pragma once

#include "Adaptee.h"
#include "Target.h"

class Adapter : public Target {
public:
	explicit Adapter(Adaptee* adaptee);
	virtual ~Adapter();

	virtual void request();

private:
	Adaptee* m_pAdaptee;
};
