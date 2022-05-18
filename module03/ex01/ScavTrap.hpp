//
// Created by Johnny Zaev on 18.05.2022.
//

#ifndef CPP_PISCINE_SCAVTRAP_HPP
#define CPP_PISCINE_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	std::string _name;
	int _health;
	int _energy;
	int _attackDamage;
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ClapTrap &b);
	ScavTrap& operator= (const ScavTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};


#endif //CPP_PISCINE_SCAVTRAP_HPP
