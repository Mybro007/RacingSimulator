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

float AllTerrainBoots::get_time(int distance)
{
	float drivingtime = static_cast<float>(distance) / static_cast<float>(pace);
	int stopscount = drivingtime / acttime;
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