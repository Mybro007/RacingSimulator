#pragma warning(disable : 4244)
#include "Broom.h"

Broom::Broom(int distance) : AirTransport(distance)
{
	name = "Broom";
	pace = 20;
	rdctn_fac = distance / 1000;
}

Broom::~Broom() = default;

float Broom::get_time(int distance)
{
	float changeddistance = distance * rdctn_fac;
	try
	{
		if (pace == 0)
		{
			throw DivNullException();
		}
		else
		{
			racetime = changeddistance / static_cast<float>(pace);
		}
	}
	catch (const DivNullException& ex)
	{
		std::cout << ex.what();
		return -1;
	}
	return racetime;
}