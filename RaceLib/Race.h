#pragma once
#pragma warning(disable : 4251)
#ifdef RACELIB_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif
#include<iostream>
#include<string>
#include<map>

RACE_API extern std::map <std::string, std::string> RType;

class RACE_API Race
{
protected:
	int distance;
	std::string raceType;
public:
	Race();
	int getDistance();
	std::string getType();
};

