//
// Created by Johnny Zaev on 19.05.2022.
//

#ifndef CPP_PISCINE_DIAMONDTRAP_HPP
#define CPP_PISCINE_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
	std::string _name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &b);
	DiamondTrap& operator= (const DiamondTrap& other);
	void whoAmI();
};


#endif //CPP_PISCINE_DIAMONDTRAP_HPP
