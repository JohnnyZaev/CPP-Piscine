//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_DOG_HPP
#define CPP_PISCINE_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog();
	Dog(const Dog &b);
	Dog &operator= (const Dog &other);
	virtual void makeSound() const;
};


#endif //CPP_PISCINE_DOG_HPP
