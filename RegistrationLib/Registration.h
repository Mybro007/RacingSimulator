#pragma once
#ifdef REGISTRATIONLIB_EXPORTS
#define REGISTRATION_API __declspec(dllexport)
#else
#define REGISTRATION_API __declspec(dllimport)
#endif
#include"TransportCreation.h"
#include<vector>

class REGISTRATION_API Registration
{
public:
	std::vector<Transport*> participants;
	short act;
	short choosetr;
	Registration(Race*, Transport*);
	~Registration();
	void regProcess(Race*, Transport*);
};

class ActException : public std::exception
{
public:
	virtual const char* what() const noexcept;
};

class RepeatTransportException : std::exception
{
public:
	virtual const char* what() const noexcept;
};

class WrongTransportTypeException : std::exception
{
public:
	virtual const char* what() const noexcept;
};

class CompetitorsQuantityException : public std::exception
{
public:
	virtual const char* what() const noexcept;
};