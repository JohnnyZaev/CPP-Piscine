//
// Created by Johnny Zaev on 18.05.2022.
//

#include "FragTrap.hpp"

int main()
{
	FragTrap a("Bad Boy");
	ClapTrap b("Good Boy");

	a.attack("someshit");
	b.attack("hot chilli");
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(9);
	a.beRepaired(0);
	a.takeDamage(1);
	a.beRepaired(5);
	a.highFivesGuys();
	a.takeDamage(100);
	a.highFivesGuys();
	return 0;
}
