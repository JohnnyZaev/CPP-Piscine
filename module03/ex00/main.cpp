//
// Created by Johnny Zaev on 18.05.2022.
//

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Bad Boy");

	a.attack("someshit");
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(9);
	a.beRepaired(0);
	a.takeDamage(1);
	a.beRepaired(5);
	return 0;
}