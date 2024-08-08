#include "ComboRace.h"

ComboRace::ComboRace()
{
	raceType = RType["combo"];
	std::cout << "Input the distance of the race: ";
	std::cin >> distance;
}