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
	Registration();
	void regProcess();
};

class ActException : public std::exception
{
public:
	const char* what() const override;
};

class RepeatTransportException : std::exception
{
public:
	const char* what() const override;
};

class WrongTransportTypeException : std::exception
{
public:
	const char* what() const override;
};