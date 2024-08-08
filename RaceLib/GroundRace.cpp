#include "GroundRace.h"

GroundRace::GroundRace()
{
	raceType = RType["groundrace"];
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}

GroundRace::~GroundRace() = default;