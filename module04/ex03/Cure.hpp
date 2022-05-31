//
// Created by Johnny Zaev on 31.05.2022.
//

#ifndef CPP_PISCINE_CURE_HPP
#define CPP_PISCINE_CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure();
	Cure(const Cure &other);
	~Cure();

	Cure &operator=(const Cure &other);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};


#endif //CPP_PISCINE_CURE_HPP
