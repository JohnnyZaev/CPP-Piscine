//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>

void convertAndDisplay(std::string str)
{
	std::cout << "char: ";
	try
	{
		if (str.size() == 1 && !isdigit(str[0]))
			std::cout << static_cast<char>(str[0]) << std::endl;
		else
		{
			std::size_t temp;
			temp = std::stoi(str, &temp, 10);
			if (isprint(temp))
				std::cout << static_cast<char>(temp) << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Not enough arguments" << std::endl;
		return EXIT_FAILURE;
	}
	std::string str = static_cast<std::string>(argv[1]);
	convertAndDisplay(str);
	return EXIT_SUCCESS;
}
