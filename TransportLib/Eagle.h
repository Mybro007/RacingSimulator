#pragma once
#include "AirTransport.h"
class TRANSPORT_API Eagle : public AirTransport
{
public:
	Eagle(int);

	float get_time(int) override;
};

