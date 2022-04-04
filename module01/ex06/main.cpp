#include "Harl.h"
#include <thread>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: bad number of arguments" << std::endl;
		return (1);
	}

	Harl harl;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	harl.complain(argv[1]);
	return (0);
}