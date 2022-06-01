//
// Created by Johnny Zaev on 31.05.2022.
//

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice is created" << std::endl;
	this->_type = "ice";
}
Ice::Ice(Ice const &src): AMateria("ice")
{
	*this = src;
}
Ice::~Ice()
{
	std::cout << "Ice is destroyed" << std::endl;
}
Ice	&Ice::operator=(const Ice &other)
{
	this->_type = other._type;
	return *this;
}
AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}