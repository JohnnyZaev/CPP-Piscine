//
// Created by Johnny Zaev on 17.05.2022.
//

#ifndef CPP_PISCINE_CLAPTRAP_HPP
#define CPP_PISCINE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int _health;
	int _energy;
	int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &b);
	ClapTrap& operator= (const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_PISCINE_CLAPTRAP_HPP
