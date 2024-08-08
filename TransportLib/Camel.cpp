#pragma warning(disable : 4244)
#include "Camel.h"

Camel::Camel() : GroundTransport()
{
	name = "Camel";
	pace = 10;
	acttime = 30;
	relax1 = 5;
	relax2 = 8;
}

float Camel::get_time(int distance)
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
		stopstime += relax1;
		for (int i = 0; i < stopscount - 1; ++i)
		{
			stopstime += relax2;
		}
	}
	racetime = drivingtime + stopstime;
	return racetime;
}