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

TRANSPORT_API Transport* allTerrainBootsCreation();

TRANSPORT_API Transport* broomCreation();

TRANSPORT_API Transport* camelCreation();

TRANSPORT_API Transport* centaurCreation();

TRANSPORT_API Transport* eagleCreation();

TRANSPORT_API Transport* fastCamelCreation();

TRANSPORT_API Transport* magicCarpetCreation();

typedef Transport* (*transport)();

TRANSPORT_API extern std::map <int, transport> tcreation;

class TRANSPORT_API TransportCreation
{
	
public:
	TransportCreation();
	~TransportCreation();
	int transportTypeChoose;
};

