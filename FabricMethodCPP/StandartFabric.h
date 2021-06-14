#pragma once
#include "IBaseShip.h"
#include <iostream>
#include <memory>
#include <vector>
class StandartFabric
{
public:
	void CreateShips();

	std::vector<std::unique_ptr<IBaseShip>> Ships;
};

