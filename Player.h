#pragma once
#include "Base.h"
class player : public Base
{
public:
	player();
	~player();
	void Born() override;
};