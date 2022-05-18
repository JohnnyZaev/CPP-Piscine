//
// Created by Johnny Zaev on 17.05.2022.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &b) {
	*this = b;
}

void ClapTrap::attack(const std::string &target) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_health)
		return ;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage" << std::endl;
	this->_health -= amount;
	if (this->_health < 0)
		this->_health = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "ClapTrap " << this->_name << " repair himself " << amount << " health" << std::endl;
	this->_health += amount;
	this->_energy--;
}