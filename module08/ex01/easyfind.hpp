//
// Created by Johnny Zaev on 18.07.2022.
//

#ifndef CPP_PISCINE_EASYFIND_HPP
#define CPP_PISCINE_EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T &cont, int value)
{
	typename T::iterator result;
	result = find(cont.begin(), cont.end(), value);
	if (result == cont.end())
		throw std::out_of_range("Value does not exist");
	else
		return result;
}


#endif //CPP_PISCINE_EASYFIND_HPP
