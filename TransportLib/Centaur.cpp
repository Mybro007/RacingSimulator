#pragma warning(disable : 4244)
#include "Centaur.h"

Centaur::Centaur() : GroundTransport()
{
	name = "Centaur";
	pace = 15;
	acttime = 8;
	relax1 = 2;
}

float Centaur::get_time(int distance)
{
	float drivingtime = static_cast<float>(distance) / static_cast<float>(pace);
	int stopscount = drivingtime / acttime;
	float stopstime{ 0 };
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
		for (int i = 0; i < stopscount; ++i)
		{
			stopstime += relax1;
		}
	}
	racetime = drivingtime + stopstime;
	return racetime;
}