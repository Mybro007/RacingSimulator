#pragma once
#include"GroundTransport.h"

class TRANSPORT_API Centaur : public GroundTransport
{
public:
	Centaur();
	~Centaur();
	float get_time(int) override;
};