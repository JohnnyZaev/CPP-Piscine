//
// Created by Johnny Zaev on 18.05.2022.
//

#ifndef CPP_PISCINE_SCAVTRAP_HPP
#define CPP_PISCINE_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
	int getSTEnergy();
	ScavTrap();
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ClapTrap &b);
	ScavTrap& operator= (const ScavTrap& other);
	void attack(const std::string& target);
	void guardGate();
};


#endif //CPP_PISCINE_SCAVTRAP_HPP
