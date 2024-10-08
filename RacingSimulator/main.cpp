#pragma warning(disable : 4244)
#pragma warning(disable : 4251)
#include<iostream>

#include"RacingProcess.h"

void jumpMenu(short& );
void finishMenu(short& );

int main()
{
	short mainAct{};
	short finishAct{};
	std::cout << "\t\t\tWelcome to the racing simulator!!!\n\n\n";
	while (finishAct!=2)
	{
		RaceCreation* raceCreation = new RaceCreation;
		TransportCreation* transportCreation = new TransportCreation;
		Registration* registr = new Registration(raceCreation->race, transportCreation->object);
		jumpMenu(mainAct);
		switch (mainAct)
		{
		case 1:
		{
			while (mainAct != 2)
			{
				registr->regProcess(raceCreation->race, transportCreation->object);
				jumpMenu(mainAct);
			}
		}
		case 2:
		{
			RacingProcess* finish = new RacingProcess(*registr, raceCreation->race);
			delete finish;
		}
		break;
		}
		delete registr;
		delete transportCreation;
		delete raceCreation;
		finishMenu(finishAct);
	}
	return 0;
}

class MainActException : public std::exception
{
public:
	virtual const char* what() const noexcept
	{
		return "Wrong action!!! Try again: ";
	}
};

void jumpMenu(short& mainAct)
{
	std::cout << "\n1. Register transport.\n" <<
		"2. Start the race\n";
	try
	{
		std::cin >> mainAct;
		if ((mainAct != 1) && (mainAct != 2))
		{
			throw MainActException();
		}
	}
	catch (const MainActException& ex)
	{
		while (!(mainAct == 1) || !(mainAct == 2))
		{
			std::cout << ex.what();
			std::cin >> mainAct;
		}
	}
	std::cout << "\n\n";
}

void finishMenu(short& finishAct)
{
	std::cout << "\n\n" << "1. Run another race.\n" <<
		"2. Exit.\n";
	try
	{
		std::cin >> finishAct;
		if ((finishAct != 1) && (finishAct != 2))
		{
			throw MainActException();
		}
	}
	catch (const MainActException& ex)
	{
		while (!(finishAct == 1) || !(finishAct == 2))
		{
			std::cout << ex.what();
			std::cin >> finishAct;
		}
	}
}