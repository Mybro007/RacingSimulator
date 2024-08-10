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

const char* CompetitorsQuantityException::what() const noexcept
{
	return "Insufficient number of participants!\n";
}

void Registration::regProcess()
{
	while (choosetr != 0)
	{
		std::cout << race->getTypeName() << " Distance: " << race->getDistance() << "\n";
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

		switch (choosetr)
		{
			case 0:
			{
				try
				{
					if (participants.size() < 1)
					{
						throw CompetitorsQuantityException();
					}
					else
					{
						std::cout << "\nRegistration is complited!\n";
						break;
					}
				}
				catch (const CompetitorsQuantityException& ex)
				{
					std::cout << ex.what();
					continue;
				}
			}
			break;
			case 1:
			{
				AllTerrainBoots* tr = new AllTerrainBoots;
				object = tr;
			}
			break;
			case 2:
			{
				Broom* tr = new Broom(race->getDistance());
				object = tr;
			}
			break;
			case 3:
			{
				Camel *tr = new Camel;
				object = tr;
			}
			break;
			case 4:
			{
				Centaur* tr = new Centaur;
				object = tr;
			}
			break;
			case 5:
			{
				Eagle* tr = new Eagle(race->getDistance());
				object = tr;
			}
			break;
			case 6:
			{
				FastCamel* tr = new FastCamel;
				object = tr;
			}
			break;
			case 7:
			{
				MagicCarpet* tr = new MagicCarpet(race->getDistance());
				object = tr;
			}
			break;
		}

		//checking registration conditions
		bool typeCorresp = false;
		if (race->getType() == 3)
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