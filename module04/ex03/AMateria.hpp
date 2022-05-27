//
// Created by Johnny Zaev on 26.05.2022.
//

#ifndef CPP_PISCINE_AMATERIA_HPP
#define CPP_PISCINE_AMATERIA_HPP

#include <iostream>

class AMateria {
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};


#endif //CPP_PISCINE_AMATERIA_HPP
