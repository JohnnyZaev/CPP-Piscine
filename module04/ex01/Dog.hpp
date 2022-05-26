//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_DOG_HPP
#define CPP_PISCINE_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(const Dog &b);
	Dog &operator= (const Dog &other);
	void makeSound() const;
	Brain *getBrain() const;
};


#endif //CPP_PISCINE_DOG_HPP
