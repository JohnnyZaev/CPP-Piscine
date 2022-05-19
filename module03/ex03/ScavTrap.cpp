//
// Created by Johnny Zaev on 18.05.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap " << " is created!" << std::endl;
	setEnergy(50);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap " << this->getName() << " is created!" << std::endl;
	this->setStarterAttributes(name, 100, 50, 20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " is destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->setName(other.getName());
	return (*this);
}

ScavTrap::ScavTrap(const ClapTrap &b) {
	*this = b;
}

void ScavTrap::attack(const std::string &target) {
	if (!this->getHealth() || !this->getEnergy())
		return ;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->consumeEnergy();
}

void ScavTrap::guardGate() {
	if (!this->getHealth() || !this->getEnergy())
		return ;
	std::cout <<  "ScavTrap" << this->getName() << " is now in Gatekeeper mode!" << std::endl;
	this->consumeEnergy();
}

int ScavTrap::getSTEnergy() {
	return this->getEnergy();
}