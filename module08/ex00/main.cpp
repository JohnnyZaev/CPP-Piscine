//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

int main( void )
{
	std::vector<int> vect;
	std::vector<int>::iterator it;
	for (int i = 1; i < 59; i += 2)
		vect.push_back(i);
	it = easyfind(vect, 43);
	std::cout << *it << std::endl;
	it = easyfind(vect, 42);
	std::cout << *it << std::endl;
	return EXIT_SUCCESS;
}