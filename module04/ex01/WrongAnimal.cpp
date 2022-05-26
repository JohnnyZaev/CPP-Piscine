//
// Created by Johnny Zaev on 25.05.2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal() {}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &b) {
	*this = b;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong undefined sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}