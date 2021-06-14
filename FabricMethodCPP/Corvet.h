#pragma once
#include "IBaseShip.h"
#include <iostream>
class Corvet : public IBaseShip
{
public:
	virtual void Fire() override;
};

