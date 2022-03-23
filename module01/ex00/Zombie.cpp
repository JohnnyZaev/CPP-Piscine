#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->_announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed..." << std::endl;
}

void Zombie::_announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}