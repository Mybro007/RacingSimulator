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

const std::string& Race::getTypeName() const
{
	switch (raceType)
	{
		case 1:
		{
			return "Race for ground transport!";
		}
		break;
		case 2:
		{
			return "Race for air transport!";
		}
		break;
		case 3:
		{
			return "Race for all types of transport!";
		}
		break;
	}
}

Race::~Race() = default;