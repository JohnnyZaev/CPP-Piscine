#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *dummy = new Zombie(name);
	return (dummy);
}