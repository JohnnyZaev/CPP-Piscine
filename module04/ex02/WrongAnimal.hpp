//
// Created by Johnny Zaev on 25.05.2022.
//

#ifndef CPP_PISCINE_WRONGANIMAL_HPP
#define CPP_PISCINE_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &b);
	WrongAnimal &operator= (const WrongAnimal &other);
	void makeSound() const;
	std::string getType() const;
};


#endif //CPP_PISCINE_WRONGANIMAL_HPP
