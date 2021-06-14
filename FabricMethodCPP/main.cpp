#include <iostream>
#include "StandartFabric.h"
#include "ParametralFabric.h"


int main()
{
	StandartFabric SF;
	ParametralFabric PF;

	SF.CreateShips();
	PF.CreateShips(E_ShipType::Corvet);
	PF.CreateShips(E_ShipType::HeavyCruiser);

	for (int i = 0; i < SF.Ships.size(); i++)
	{
		SF.Ships[i].get()->Fire();
	}
	for (int i = 0; i < PF.Ships.size(); i++)
	{
		PF.Ships[i].get()->Fire();
	}


	return 0;
}