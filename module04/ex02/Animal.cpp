//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "Animal is deleted" << std::endl;
}

Animal::Animal() {
	std::cout << "Animal is created" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	return *this;
}

Animal::Animal(const Animal &b) {
	*this = b;
}

std::string Animal::getType() const {
	return type;
}