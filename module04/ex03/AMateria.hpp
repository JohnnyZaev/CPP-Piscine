//
// Created by Johnny Zaev on 26.05.2022.
//

#ifndef CPP_PISCINE_AMATERIA_HPP
#define CPP_PISCINE_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};


#endif //CPP_PISCINE_AMATERIA_HPP
