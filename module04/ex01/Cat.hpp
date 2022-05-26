//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_CAT_HPP
#define CPP_PISCINE_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat(const Cat &b);
	Cat &operator= (const Cat &other);
	virtual void makeSound() const;
};


#endif //CPP_PISCINE_CAT_HPP
