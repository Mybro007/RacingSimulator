#include "MagicCarpet.h"


MagicCarpet::MagicCarpet(int distance) : AirTransport(distance)
{
	name = "Magic Carpet";
	pace = 10;
	if (distance < 1000)
	{

	}
	else if (distance < 5000)
	{
		rdctn_fac = 0.03f;
	}
	else if (distance < 10000)
	{
		rdctn_fac = 0.1f;
	}
	else
	{
		rdctn_fac = 0.05f;
	}
}

MagicCarpet::~MagicCarpet() = default;

float MagicCarpet::get_time(int distance)
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