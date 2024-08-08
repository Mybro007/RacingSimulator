#include "RacingProcess.h"

RacingProcess::RacingProcess(Registration reg, Race* rac)
{
	for (size_t i = 0; i < reg.participants.size(); ++i)
	{
		for (size_t j = 0; j < reg.participants.size() - 1 -i; ++j)
		{
			if (reg.participants[j]->get_time(rac->getDistance()) > reg.participants[j + 1]->get_time(rac->getDistance()))
			{
				std::swap(reg.participants[j], reg.participants[j + 1]);
			}
		}
	}

	std::cout << "Results of the racing:\n";
	for (size_t i = 0; i < reg.participants.size(); ++i)
	{
		std::cout << i + 1 << ". " << reg.participants[i]->get_name() << ". " << "Time: " << reg.participants[i]->get_time(rac->getDistance()) << "\n";
	}
}