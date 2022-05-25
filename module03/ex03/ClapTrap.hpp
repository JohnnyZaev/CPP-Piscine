//
// Created by Johnny Zaev on 17.05.2022.
//

#ifndef CPP_PISCINE_CLAPTRAP_HPP
#define CPP_PISCINE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	int _health;
	int _energy;
	int _attackDamage;
	ClapTrap();
	void setStarterAttributes(std::string name, int health, int energy, int attackDamage);
	std::string getName() const;
	int getHealth();
	int getEnergy();
	int getAttackDamage();
	void setName(std::string name);
	void consumeEnergy();
	void setHealth(int health);
	void setEnergy(int energy);
	void setAttackDamage(int attackDamage);
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &b);
	ClapTrap& operator= (const ClapTrap& other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_PISCINE_CLAPTRAP_HPP
