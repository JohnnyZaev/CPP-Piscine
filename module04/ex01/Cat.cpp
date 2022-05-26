//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat is created" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat is destroyed" << std::endl;
}

Cat::Cat(const Cat &b) {
	std::cout << "Cat is copy-created" << std::endl;
	type = "Cat";
	brain = new Brain();
	*this = b;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	*(this->brain) = *(other.getBrain());
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const {
	return this->brain;
}