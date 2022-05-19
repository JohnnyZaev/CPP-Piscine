//
// Created by Johnny Zaev on 19.05.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap " << " is created!" << std::endl;
	setHealth(100);
	setAttackDamage(30);
}

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

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " request a high five" << std::endl;
	this->consumeEnergy();
}
int FragTrap::getFTHealth() {
	return this->getHealth();
}

int FragTrap::getFTAttackDamage() {
	return this->getAttackDamage();
}