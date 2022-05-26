//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_ANIMAL_HPP
#define CPP_PISCINE_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &b);
	Animal &operator= (const Animal &other);
	virtual void makeSound() const = 0;
	std::string getType() const;
};


#endif //CPP_PISCINE_ANIMAL_HPP
