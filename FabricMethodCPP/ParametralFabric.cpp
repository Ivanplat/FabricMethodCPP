#include "ParametralFabric.h"
#include "Corvet.h"
#include "HeavyCruiser.h"
void ParametralFabric::CreateShips(E_ShipType ShipType)
{
	int count = (rand() % 10) + 1;
	for (int i = 0; i < count; i++)
	{
		switch (ShipType)
		{
		case E_ShipType::Corvet:
		{
			Ships.push_back(std::make_unique<Corvet>());
		}
		break;
		case E_ShipType::HeavyCruiser:
		{
			Ships.push_back(std::make_unique<HeavyCruiser>());
		}
		break;
		}
	}
}
