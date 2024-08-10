#include "Transport.h"

Transport::Transport() : pace{ 0 }, type{ 0 }, racetime{ 0 }
{
}

Transport::~Transport() = default;

const std::string &Transport::get_name() const
{
	return name;
}

short Transport::get_type()
{
	return type;
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