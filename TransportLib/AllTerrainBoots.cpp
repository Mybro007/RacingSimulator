#pragma warning(disable : 4244)
#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots() : GroundTransport()
{
	name = "All-terrain boots";
	pace = 6;
	acttime = 60;
	relax1 = 10;
	relax2 = 5;
}

AllTerrainBoots::~AllTerrainBoots() = default;

float AllTerrainBoots::get_time(int distance)
{
	float drivingtime;
	int stopscount;
	try
	{
		if (pace == 0 || acttime == 0)
		{
			throw DivNullException();
		}
		else
		{
			drivingtime = static_cast<float>(distance) / static_cast<float>(pace);
			stopscount = drivingtime / acttime;
		}
	}
	catch (const DivNullException& ex)
	{
		std::cout << ex.what();
		return -1;
	}
	float stopstime{0};
	if (stopscount == 0)
	{
		stopstime;
	}
	else if (stopscount == 1)
	{
		stopstime += relax1;
	}
	else
	{
		stopstime += relax1;
		for (int i = 0; i < stopscount - 1; ++i)
		{
			stopstime += relax2;
		}
	}
	racetime = drivingtime + stopstime;
	return racetime;
}