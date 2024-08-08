#include "AirRace.h"

AirRace::AirRace()
{
	raceType = RType["airrace"];
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}

AirRace::~AirRace() = default;