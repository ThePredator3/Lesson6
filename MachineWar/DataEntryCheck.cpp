#include <iostream>

#include "DataEntryCheck.h"

void DataEntryCheck(int& data)
{
	while (!std::cin.good())
	{
		std::cout << "Incorect data entry!" << std::endl;
		std::cout << "Re-enter data: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
		std::cin >> data;
	}
}