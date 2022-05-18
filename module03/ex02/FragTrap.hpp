//
// Created by Johnny Zaev on 18.05.2022.
//

#ifndef CPP_PISCINE_FRAGTRAP_HPP
#define CPP_PISCINE_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
	std::string _name;
	int _health;
	int _energy;
	int _attackDamage;
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &b);
	FragTrap& operator= (const FragTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};


#endif //CPP_PISCINE_FRAGTRAP_HPP
