#pragma once
#include "AirTransport.h"

class TRANSPORT_API MagicCarpet : public AirTransport
{
public:
	MagicCarpet(int);
	~MagicCarpet();
	float get_time(int) override;
};
