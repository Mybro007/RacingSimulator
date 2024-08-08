#pragma once
#include "Transport.h"

class TRANSPORT_API GroundTransport : public Transport
{
public:
	float racetime;
	GroundTransport();
	virtual ~GroundTransport();
};