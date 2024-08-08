#pragma warning(disable : 4244)
#include "Broom.h"

Broom::Broom(int distance) : AirTransport(distance)
{
	name = "Broom";
	pace = 20;
	rdctn_fac = distance / 1000;
}

float Broom::get_time(int distance)
{
	float changeddistance = distance * rdctn_fac;
	racetime = changeddistance / static_cast<float>(pace);
	return racetime;
}