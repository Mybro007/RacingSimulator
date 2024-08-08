#include "Transport.h"

std::map<std::string, std::string> TrType
{
	{"ground", "Race for ground transport."},
	{ "air", "Race for air transport." }
};

Transport::Transport() : pace{0}, acttime{0}, relax1{0}, relax2{0}, racetime{0}
{
}

Transport::~Transport() = default;

std::string Transport::get_name()
{
	return name;
}

std::string Transport::get_type()
{
	return TrType[type];
}

unsigned int Transport::get_pace()
{
	return pace;
}

float Transport::get_time(int distance)
{
	return racetime;
}

void Transport::get_info()
{
	get_name();
	get_type();
	get_pace();
}

const char* DivNullException::what() const noexcept
{
	return "Division by zero! \n";
}