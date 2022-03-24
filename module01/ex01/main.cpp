#include "Zombie.hpp"

int main(void)
{
	Zombie *Bar;

	Bar = zombieHorde(10, "Bar");
	for (int i = 0; i < 10; i++)
        Bar[i].announce();
	delete[](Bar);
}