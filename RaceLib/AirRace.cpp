#include "AirRace.h"

AirRace::AirRace()
{
	raceType = 2;
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}

AirRace::~AirRace() = default;