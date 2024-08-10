#pragma once
#pragma warning(disable : 4251)
#ifdef RACELIB_EXPORTS
#define RACE_API __declspec(dllexport)
#else
#define RACE_API __declspec(dllimport)
#endif
#include<iostream>
#include<string>

class RACE_API Race
{
protected:
	int distance;
	short raceType;
public:
	Race();
	virtual ~Race();
	int getDistance();
	const std::string& getTypeName() const;
	short getType();
};

