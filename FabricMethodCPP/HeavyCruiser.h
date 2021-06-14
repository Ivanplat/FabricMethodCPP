#pragma once
#include "IBaseShip.h"
#include <iostream>
class HeavyCruiser : public IBaseShip
{
public:
	virtual void Fire() override;
};

