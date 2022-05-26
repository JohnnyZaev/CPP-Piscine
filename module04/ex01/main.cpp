//
// Created by Johnny Zaev on 25.05.2022.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	const WrongAnimal* newmeta = new WrongCat();
	std::cout << newmeta->getType() << " " << std::endl;
	newmeta->makeSound(); //will output the wrongAnimal sound!
	delete newmeta;
	return 0;
}