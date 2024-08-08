#pragma once
#include "Transport.h"

class TRANSPORT_API GroundTransport : public Transport
{
protected:
	unsigned int acttime;
	unsigned int relax1;
	float relax2;
public:
	GroundTransport();
};