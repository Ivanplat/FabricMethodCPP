#include "StandartFabric.h"
#include "HeavyCruiser.h"
#include "Corvet.h"

void StandartFabric::CreateShips()
{
	int count = (rand() % 10)+1;
	for (int i = 0; i < count; i++)
	{
		int s = i % 2;
		switch (s)
		{
		case 0:
		{
			Ships.push_back(std::make_unique<Corvet>());
		}
		break;
		case 1:
		{
			Ships.push_back(std::make_unique<HeavyCruiser>());
		}
		break;
		}
	}

}
