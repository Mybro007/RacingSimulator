#pragma once
#include"GroundTransport.h"

class TRANSPORT_API AllTerrainBoots : public GroundTransport
{
public:
	AllTerrainBoots();
	~AllTerrainBoots();
	float get_time(int) override;
};

