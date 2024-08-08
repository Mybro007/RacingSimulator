#pragma once
#ifdef RACELIB_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif
#include"AirRace.h"
#include"GroundRace.h"
#include"ComboRace.h"

RACE_API void groundRaceCreation();

RACE_API void airRaceCreation();

RACE_API void comboRaceCreation();

typedef void(*racetypecreation)();

GroundRace* groundRace;
AirRace* airRace;
ComboRace* comboRace;
Race* race;

RACE_API extern std::map <int, racetypecreation> rcreation;

class RACE_API RaceCreation
{
public:
	RaceCreation();
	~RaceCreation();
	int raceTypeChoose;
};

class RaceTypeException : public std::exception
{
public:
	virtual const char* what() const noexcept;
};