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
	return find(cont.begin(), cont.end(), value);
}


#endif //CPP_PISCINE_EASYFIND_HPP
