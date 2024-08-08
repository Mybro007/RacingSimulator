#include "TransportCreation.h"

std::map <int, transport> tcreation
{
	{1, &allTerrainBootsCreation},
	{2, &broomCreation},
	{3, &camelCreation},
	{4, &centaurCreation},
	{5, &eagleCreation},
	{6, &fastCamelCreation},
	{7, &magicCarpetCreation}
};

Transport* allTerrainBootsCreation()
{
	AllTerrainBoots* trans = new AllTerrainBoots;
	Transport* tr = &(*trans);
	return tr;
}

Transport* broomCreation()
{
	Broom* trans = new Broom(race->getDistance());
	Transport* tr = &(*trans);
	return tr;
}

Transport* camelCreation()
{
	Camel* trans = new Camel;
	Transport* tr = &(*trans);
	return tr;
}

Transport* centaurCreation()
{
	Centaur* trans = new Centaur;
	Transport* tr = &(*trans);
	return tr;
}

Transport* eagleCreation()
{
	Eagle* trans = new Eagle(race->getDistance());
	Transport* tr = &(*trans);
	return tr;
}

Transport* fastCamelCreation()
{
	FastCamel* trans = new FastCamel;
	Transport* tr = &(*trans);
	return tr;
}

Transport* magicCarpetCreation()
{
	MagicCarpet* trans = new MagicCarpet(race->getDistance());
	Transport* tr = &(*trans);
	return tr;
}

TransportCreation::TransportCreation()
{
	transportTypeChoose = -1;
}