//
// Created by Johnny Zaev on 31.05.2022.
//

#ifndef CPP_PISCINE_ICE_HPP
#define CPP_PISCINE_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice &src);
	~Ice();
	Ice &operator=(const Ice &other);
	virtual AMateria *clone() const;
	virtual void use(ICharacter& target);
};


#endif //CPP_PISCINE_ICE_HPP
