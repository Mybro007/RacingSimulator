#pragma once
#include"GroundTransport.h"

class TRANSPORT_API Camel : public GroundTransport
{
public:
	Camel();
	~Camel();
	float get_time(int) override;
};

