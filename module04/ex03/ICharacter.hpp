//
// Created by Johnny Zaev on 31.05.2022.
//

#ifndef CPP_PISCINE_ICHARACTER_HPP
#define CPP_PISCINE_ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}

	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual void printInventory(void) const = 0;
};

#endif //CPP_PISCINE_ICHARACTER_HPP
