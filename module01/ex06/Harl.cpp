#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	i = 0;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (levels[i] != level && i < 4)
		i++;
	switch (i) {
		case 4:
			std::cerr << "Error: Karl can only accept DEBUG INFO WARNING or ERROR. Please try again with 1 of this arguments" << std::endl;
			return ;
		case 0:
			(this->*functions[i++])();
		case 1:
			(this->*functions[i++])();
		case 2:
			(this->*functions[i++])();
		case 3:
			(this->*functions[i])();
	}
}