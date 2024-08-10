#include "RaceCreation.h"

const char *RaceTypeException::what() const noexcept
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
	switch (raceTypeChoose)
	{
		case 1:
		{
			GroundRace* grRace = new GroundRace;
			race = grRace;
		}
		break;
		case 2:
		{
			AirRace* arRace = new AirRace;
			race = arRace;
		}
		break;
		case 3:
		{
			ComboRace* cmbRace = new ComboRace;
			race = cmbRace;
		}
		break;
	}
}