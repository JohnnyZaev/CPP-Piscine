//
// Created by Johnny Zaev on 18.05.2022.
//

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Bad Boy");

	a.attack("someshit");
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(9);
	a.beRepaired(0);
	a.takeDamage(1);
	a.beRepaired(5);
	a.whoAmI();
	a.takeDamage(100);
	a.whoAmI();
	return 0;
}
