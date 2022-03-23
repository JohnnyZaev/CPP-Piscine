#include "Zombie.hpp"

int main(void)
{
	Zombie *Bar;

	Bar = newZombie("Bar");
	randomChump("Foo");
	delete(Bar);
}