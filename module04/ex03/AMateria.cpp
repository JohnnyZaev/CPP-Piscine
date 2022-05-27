//
// Created by Johnny Zaev on 26.05.2022.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	std::cout << "Amateria is created" << std::endl;
	_type = type;
}

AMateria::~AMateria() {
	std::cout << "Amateria is destroyed" << std::endl;
}

const std::string &AMateria::getType() const {
	return this->_type;
}