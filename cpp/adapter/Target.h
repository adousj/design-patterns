#pragma once

#include "Adaptee.h"

class Target {
public:
	explicit Target(Adaptee* adaptee) {};
	virtual ~Target() {};

	virtual void request() = 0;
};
