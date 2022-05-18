//
// Created by Johnny Zaev on 18.05.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _health(100), _energy(100), _attackDamage(30) {
	std::cout << "FragTrap " << this->_name << " is created!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->_name = other._name;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &b) {
	*this = b;
}

void FragTrap::attack(const std::string &target) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (!this->_health)
		return ;
	std::cout << "FragTrap " << this->_name << " takes " << amount << " damage" << std::endl;
	this->_health -= amount;
	if (this->_health < 0)
		this->_health = 0;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (!this->_health || !this->_energy)
		return ;
	std::cout << "FragTrap " << this->_name << " repair himself " << amount << " health" << std::endl;
	this->_health += amount;
	this->_energy--;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " requesting a high five from guys " << std::endl;
}