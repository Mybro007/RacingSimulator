#pragma warning(disable : 4244)
#include "Centaur.h"

Centaur::Centaur() : GroundTransport()
{
	name = "Centaur";
	pace = 15;
	acttime = 8;
	relax1 = 2;
}

Centaur::~Centaur() = default;

float Centaur::get_time(int distance)
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