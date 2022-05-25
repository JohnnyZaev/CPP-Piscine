//
// Created by Johnny Zaev on 25.05.2022.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
}

WrongCat::~WrongCat() {}

WrongCat::WrongCat(const WrongCat &b) {
	*this = b;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong meow!" << std::endl;
}