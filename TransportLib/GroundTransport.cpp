#include "GroundTransport.h"

GroundTransport::GroundTransport() : Transport()
{
	type = TrType["ground"];
}

GroundTransport::~GroundTransport() = default;