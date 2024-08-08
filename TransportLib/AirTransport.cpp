#include "AirTransport.h"

AirTransport::AirTransport(int distance) : Transport()
{
	type = TrType["air"];
}

AirTransport::~AirTransport() = default;