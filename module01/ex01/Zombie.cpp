#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}