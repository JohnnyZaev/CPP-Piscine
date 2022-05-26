//
// Created by Johnny Zaev on 26.05.2022.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain is destroyed" << std::endl;
}

Brain::Brain(const Brain &b) {
	*this = b;
}

Brain &Brain::operator=(const Brain &b) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	return *this;
}