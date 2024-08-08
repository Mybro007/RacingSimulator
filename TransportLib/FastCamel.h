#pragma once
#include"GroundTransport.h"

class TRANSPORT_API FastCamel : public GroundTransport
{
private:
	unsigned int relax3;
public:
	FastCamel();
	~FastCamel();
	float get_time(int) override;
};