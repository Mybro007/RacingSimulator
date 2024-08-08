#include "Eagle.h"

Eagle::Eagle(int distance) : AirTransport(distance)
{
	name = "Eagle";
	pace = 8;
	rdctn_fac = 0.06f;
}

float Eagle::get_time(int distance)
{
	float changeddistance = distance * rdctn_fac;
	racetime = changeddistance / static_cast<float>(pace);
	return racetime;
}