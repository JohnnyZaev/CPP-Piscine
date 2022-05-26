//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_WRONGCAT_HPP
#define CPP_PISCINE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &b);
	WrongCat &operator= (const WrongCat &other);
	void makeSound() const;
};


#endif //CPP_PISCINE_WRONGCAT_HPP
