#include "AirTransport.h"

AirTransport::AirTransport(int distance) : Transport()
{
	rdctn_fac = 0;
	type = 2;
}

AirTransport::~AirTransport() = default;