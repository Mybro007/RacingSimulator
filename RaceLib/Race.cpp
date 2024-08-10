#include "Race.h"

Race::Race() : raceType{-1}, distance{0}
{
}

int Race::getDistance()
{
	return distance;
}

short Race::getType()
{
	return raceType;
}

void Race::getTypeName()
{
	switch (raceType)
	{
		case 1:
		{
			std::cout << "Race for ground transport!";
		}
		break;
		case 2:
		{
			std::cout << "Race for air transport!";
		}
		break;
		case 3:
		{
			std::cout << "Race for all types of transport!";
		}
		break;
	}
}

Race::~Race() = default;