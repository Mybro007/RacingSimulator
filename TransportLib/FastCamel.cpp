#pragma warning(disable : 4244)
#include "FastCamel.h"

FastCamel::FastCamel() : GroundTransport()
{
	name = "Fast Camel";
	pace = 40;
	acttime = 10;
	relax1 = 5;
	relax2 = 6.5;
	relax3 = 8;
}

FastCamel::~FastCamel() = default;

float FastCamel::get_time(int distance)
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
	else if (stopscount == 2)
	{
		stopstime = relax1 + relax2;
		
	}
	else
	{
		stopstime = relax1 + relax2;
		for (int i = 0; i < stopscount - 2; ++i)
		{
			stopstime += relax3;
		}
	}
	racetime = drivingtime + stopstime;
	return racetime;
}