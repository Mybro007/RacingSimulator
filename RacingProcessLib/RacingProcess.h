#pragma once
#ifdef RACINGPROCESSLIB_EXPORTS
#define RACINGPROCESS_API __declspec(dllexport)
#else
#define RACINGPROCESS_API __declspec(dllimport)
#endif
#include"Registration.h"

class RACINGPROCESS_API RacingProcess
{
public:
	RacingProcess(Registration, Race*);
};

