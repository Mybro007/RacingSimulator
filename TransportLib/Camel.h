#pragma once
#include"GroundTransport.h"

class TRANSPORT_API Camel : public GroundTransport
{
public:
	Camel();

	float get_time(int) override;
};

