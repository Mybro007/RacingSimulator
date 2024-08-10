#include "RacingProcess.h"

RacingProcess::RacingProcess(Registration reg)
{
	for (size_t i = 0; i < reg.participants.size(); ++i)
	{
		for (size_t j = 0; j < reg.participants.size() - 1 -i; ++j)
		{
			if (reg.participants[j]->get_time(race->getDistance()) > reg.participants[j + 1]->get_time(race->getDistance()))
			{
				std::swap(reg.participants[j], reg.participants[j + 1]);
			}
		}
	}

	std::cout << "Results of the racing:\n";
	for (size_t i = 0; i < reg.participants.size(); ++i)
	{
		std::cout << i + 1 << ". " << reg.participants[i]->get_name() << ". " << "Time: " << reg.participants[i]->get_time(race->getDistance()) << "\n";
	}
}

RacingProcess::~RacingProcess()
{
	delete object;
	delete race;
}