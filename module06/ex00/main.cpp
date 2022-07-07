//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>

void convertAndDisplay(std::string str)
{
	std::cout << "Do smth twice kekw + " << str << std::endl;
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
