//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Animal.hpp"

Animal::~Animal() {}

Animal::Animal() {}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	return *this;
}

Animal::Animal(const Animal &b) {
	*this = b;
}

void Animal::makeSound() const {
	std::cout << "Undefined sound" << std::endl;
}

std::string Animal::getType() const {
	return type;
}