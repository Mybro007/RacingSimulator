#pragma once
#ifdef RACELIB_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif
#include"AirRace.h"
#include"GroundRace.h"
#include"ComboRace.h"

class RACE_API RaceCreation
{
public:
	Race* race;
	RaceCreation();
	int raceTypeChoose;
};

class RaceTypeException : public std::exception
{
public:
	virtual const char* what() const noexcept;
};