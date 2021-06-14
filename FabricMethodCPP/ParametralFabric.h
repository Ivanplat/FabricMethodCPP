#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Data.h"
#include "IBaseShip.h"
class ParametralFabric
{
public:
	void CreateShips(E_ShipType ShipType);

	std::vector<std::unique_ptr<IBaseShip>> Ships;
};

