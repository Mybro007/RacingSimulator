#include "Eagle.h"

Eagle::Eagle(int distance) : AirTransport(distance)
{
	name = "Eagle";
	pace = 8;
	rdctn_fac = 0.06f;
}

Eagle::~Eagle() = default;

float Eagle::get_time(int distance)
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