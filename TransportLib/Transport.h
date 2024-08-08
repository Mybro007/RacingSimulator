#pragma once
#pragma warning(disable : 4251)
#ifdef TRANSPORTLIB_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif
#include<iostream>
#include<string>
#include<map>

TRANSPORT_API extern std::map<std::string, std::string> TrType;

class TRANSPORT_API Transport
{
protected:
	std::string name;
	std::string type;
	unsigned int pace;
	unsigned int acttime;
	unsigned int relax1;
	float relax2;
public:
	float racetime;
	Transport();
	virtual ~Transport();
	virtual std::string get_name();

	virtual std::string get_type();

	virtual unsigned int get_pace();

	virtual float get_time(int);

	void get_info();
};

class DivNullException : std::exception
{
public:
	virtual const char* what() const noexcept;
};