#pragma once
#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif

#include"RaceCreation.h"
#include"AllTerrainBoots.h"
#include"Broom.h"
#include"Camel.h"
#include"Centaur.h"
#include"Eagle.h"
#include"FastCamel.h"
#include"MagicCarpet.h"

class TRANSPORT_API TransportCreation
{
	
public:
	Transport* object;
	TransportCreation();
};

