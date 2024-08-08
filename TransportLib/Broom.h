#pragma once
#include "AirTransport.h"
class TRANSPORT_API Broom : public AirTransport
{
public:
	Broom(int);
	~Broom();
	float get_time(int) override;
};

