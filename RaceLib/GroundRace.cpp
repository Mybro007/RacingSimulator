#include "GroundRace.h"

GroundRace::GroundRace()
{
	raceType = 1;
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}

GroundRace::~GroundRace() = default;