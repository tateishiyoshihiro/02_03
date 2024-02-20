#pragma once
#include "Base.h"
class Car : public Base
{
public:
	Car();
	~Car();
	void Born() override;
};
