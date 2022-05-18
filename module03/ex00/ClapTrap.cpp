//
// Created by Johnny Zaev on 17.05.2022.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _health(10), _name(name), _energy(10), _attackDamage(0) {

}

ClapTrap::~ClapTrap() {

}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &b) {
	*this = b;
}

void ClapTrap::attack(const std::string &target) {

}