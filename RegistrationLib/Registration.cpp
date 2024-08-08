#include "Registration.h"
#include<vector>

const char* ActException::what() const noexcept
{
	return "Wrong action!!! Try again: \n";
}

const char* RepeatTransportException::what() const noexcept
{
	return " already registered! \n";
}

const char* WrongTransportTypeException::what() const noexcept
{
	return "Attempt to register the wrong type of vehicle!\n";
}

void Registration::regProcess()
{
	while (choosetr != 0)
	{
		std::cout << race->getType() << " Distance: " << race->getDistance() << "\n";
		if (!participants.empty())
		{
			std::cout << "Registered transport: ";
			for (size_t i = 0; i < participants.size(); ++i)
			{
				std::cout << participants[i]->get_name() << " ";
			}
		}
		std::cout << "1. All-Terrain Boots\n" <<
			"2. Broom\n" <<
			"3. Camel\n" <<
			"4. Centaur\n" <<
			"5. Eagle\n" <<
			"6. Fast Camel\n" <<
			"7. Magic Carpet\n" <<
			"0. Finish Registration\n";
		std::cout << "Choose the transport or input '0' to finish registration: ";
		try
		{
			std::cin >> choosetr;
			if (choosetr > 7 || choosetr < 0)
			{
				throw ActException();
			}
		}
		catch (const ActException& ex)
		{
			std::cout << ex.what();
			while (act > 7 || choosetr < 0)
			{
				std::cin >> act;
				if (act > 7 || choosetr < 0)
				{
					std::cout << ex.what();
				}
			}
		}

		if (choosetr == 0) break;

		Transport* object = (Transport*)tcreation[choosetr];

		//checking registration conditions
		bool typeCorresp = false;
		if (race->getType() == "Race for all types of transport.")
		{
			typeCorresp = true;
		}
		else if (race->getType() == object->get_type())
		{
			typeCorresp = true;
		}
		else
		{
			typeCorresp = false;
		}
		try
		{
			if (!typeCorresp)
			{
				throw WrongTransportTypeException();
			}
		}
		catch (const WrongTransportTypeException& ex)
		{
			std::cout << ex.what();
			continue;
		}

		if (typeCorresp && participants.empty())
		{
			participants.push_back(object);
			std::cout << object->get_name() << " successfully registered!\n";
		}
		else if (typeCorresp)
		{
			try
			{
				for (size_t i = 0; i < participants.size(); ++i)
				{
					if (participants[i]->get_name() == object->get_name())
					{
						throw RepeatTransportException();
					}
				}
			}
			catch (const RepeatTransportException& ex)
			{
				std::cout << object->get_name() << ex.what();
				continue;
			}
			participants.push_back(object);
			std::cout << object->get_name() << " successfully registered!\n";
		}
	}
}

Registration::Registration()
{
	act = 0;
	choosetr = -1;
	std::cout << "At least 2 vehicles must be registered!\n";
	std::cout << "1. Register transport.\n";
	std::cout << "Choose the action: ";
	try
	{
		std::cin >> act;
		if (act != 1)
		{
			throw ActException();
		}
	}
	catch (const ActException& ex)
	{
		std::cout << ex.what();
		while (act != 1)
		{
			std::cin >> act;
			if (act != 1)
			{
				std::cout << ex.what();
			}
		}
	}
	regProcess();
}

Registration::~Registration() = default;