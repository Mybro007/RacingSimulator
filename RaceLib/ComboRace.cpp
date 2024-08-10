#include "ComboRace.h"

ComboRace::ComboRace()
{
	raceType = 3;
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}

ComboRace::~ComboRace() = default;