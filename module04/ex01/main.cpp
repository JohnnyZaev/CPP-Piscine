//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Cat basic;
	{
		Cat tmp = basic;
	}
	return 0;
}