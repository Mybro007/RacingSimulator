#pragma once
#include "AirTransport.h"
class TRANSPORT_API Broom : public AirTransport
{
public:
	Broom(int);

	float get_time(int) override;
};

