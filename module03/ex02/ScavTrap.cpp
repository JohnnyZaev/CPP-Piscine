//
// Created by Johnny Zaev on 18.05.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _health(100), _energy(50), _attackDamage(20) {
	std::cout << "ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->_name = other._name;
	return (*this);
}

ScavTrap::ScavTrap(const ClapTrap &b) {
	*this = b;
}

void ScavTrap::attack(const std::string &target) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (!this->_health)
		return ;
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " damage" << std::endl;
	this->_health -= amount;
	if (this->_health < 0)
		this->_health = 0;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "ScavTrap " << this->_name << " repair himself " << amount << " health" << std::endl;
	this->_health += amount;
	this->_energy--;
}

void ScavTrap::guardGate() {
	std::cout <<  "ScavTrap" << this->_name << " is now in Gatekeeper mode!" << std::endl;
}