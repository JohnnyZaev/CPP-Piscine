//
// Created by Johnny Zaev on 19.05.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap " << this->getName() << " is created!" << std::endl;
	this->setStarterAttributes(name, 100, 100, 30);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->setName(other.getName());
	return (*this);
}

FragTrap::FragTrap(const FragTrap &b) {
	*this = b;
}

void FragTrap::attack(const std::string &target) {
	if (!this->getHealth() || !this->getEnergy())
		return ;
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->consumeEnergy();
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " request a high five" << std::endl;
	this->consumeEnergy();
}