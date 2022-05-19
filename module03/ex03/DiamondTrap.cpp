//
// Created by Johnny Zaev on 19.05.2022.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	std::cout << "DiamondTrap " << name << " is created" << std::endl;
	setName(name + "_clap_name");
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " is destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	this->_name = other._name;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &b) {
	*this = b;
}

void DiamondTrap::whoAmI() {
	std::cout << "I'm " << this->_name << " or " << getName() << "?" << std::endl;
}