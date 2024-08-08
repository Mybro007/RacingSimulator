#include "RaceCreation.h"

void groundRaceCreation()
{
	groundRace = new GroundRace;
	race = &(*groundRace);
}

void airRaceCreation()
{
	airRace = new AirRace;
	race = &(*airRace);
}

void comboRaceCreation()
{
	comboRace = new ComboRace;
	race = &(*comboRace);
}

void(&GRCreation)() = groundRaceCreation;
void(&AIRCreation)() = airRaceCreation;
void(&COMBreation)() = comboRaceCreation;


std::map <int, racetypecreation> rcreation
{
	{1, GRCreation},
	{2, AIRCreation},
	{3, COMBreation}
};

const char *RaceTypeException::what() const
{
	return "Input Error!!! Try again: \n";
}

RaceCreation::RaceCreation()
{
	raceTypeChoose = 0;
	std::cout << "1. Race for ground transport.\n" <<
		"2. Race for air transport.\n" <<
		"3. Race for air and ground transport(combined race).\n";
	try 
	{
		std::cin >> raceTypeChoose;
		if (raceTypeChoose > 3 || raceTypeChoose < 1)
		{
			throw RaceTypeException();
		}
	}
	catch (const RaceTypeException& ex)
	{
		std::cout << ex.what();
		while (!(raceTypeChoose < 3 && raceTypeChoose>1))
		{
			std::cin >> raceTypeChoose;
			if (!(raceTypeChoose < 3 && raceTypeChoose>1))
			{
				std::cout << ex.what();
			}
		}
	}
	catch (...) { std::cout << "Unknown Error!!!"; }
	rcreation[raceTypeChoose];
}