#include "Race.h"

std::map <std::string, std::string> RType
{
	{"groundrace", "Race for ground transport."},
	{"airrace", "Race for air transport."},
	{"combo", "Race for all types of transport."}
};

Race::Race()
{
	distance = 0;
}

int Race::getDistance()
{
	return distance;
}

std::string Race::getType()
{
	return raceType;
}

Race::~Race() = default;