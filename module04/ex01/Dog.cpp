//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog is created" << std::endl;
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
	std::cout << "Assignement operator for Dog called" << std::endl;
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