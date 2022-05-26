//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog is created" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog is destroyed" << std::endl;
}

Dog::Dog(const Dog &b) {
	std::cout << "Dog is copy-created" << std::endl;
	type = "Dog";
	brain = new Brain();
	*this = b;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	*(this->brain) = *(other.getBrain());
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const {
	return this->brain;
}