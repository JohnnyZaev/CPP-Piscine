//
// Created by Johnny Zaev on 31.05.2022.
//

#ifndef CPP_PISCINE_IMATERIASOURCE_HPP
#define CPP_PISCINE_IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *materia_to_learn) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif //CPP_PISCINE_IMATERIASOURCE_HPP
