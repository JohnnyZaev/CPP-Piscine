//
// Created by Johnny Zaev on 31.05.2022.
//

#ifndef CPP_PISCINE_MATERIASOURCE_HPP
#define CPP_PISCINE_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource &src );
	~MateriaSource( void );
	MateriaSource	&operator=( const MateriaSource &other );
	virtual void		learnMateria(AMateria *materia_to_learn);
	virtual AMateria	*createMateria(std::string const & type);
	void			printMaterias( void ) const ;
private:
	const static int	_materias_size = 4;
	AMateria		*_materias[MateriaSource::_materias_size];
	int			_number_learned;

};


#endif //CPP_PISCINE_MATERIASOURCE_HPP
