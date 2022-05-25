//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
}

Cat::~Cat() {}

Cat::Cat(const Cat &b) {
	*this = b;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}