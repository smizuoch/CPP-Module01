#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <log level>" << std::endl;
		return 1;
	}

	Harl harl;
	harl.filterComplain(argv[1]);

	return 0;
}