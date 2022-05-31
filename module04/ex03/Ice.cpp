//
// Created by Johnny Zaev on 31.05.2022.
//

#include "Ice.hpp"

Ice::Ice( void )
{
	std::cout << "Ice is created" << std::endl;
	this->type = "ice";
}
Ice::Ice( Ice const & src ): AMateria("ice")
{
	*this = src;
}
Ice::~Ice( void )
{
	std::cout << "Ice is destroyed" << std::endl;
}
Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	return *this;
}
AMateria *Ice::clone( void ) const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}