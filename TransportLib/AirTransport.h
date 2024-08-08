#pragma once
#include "Transport.h"
class TRANSPORT_API AirTransport : public Transport
{
protected:
	float rdctn_fac;
public:
	AirTransport(int);
};

