//
// Created by Johnny Zaev on 13.07.2022.
//

#ifndef CPP_PISCINE_TEMPHEADER_HPP
#define CPP_PISCINE_TEMPHEADER_HPP

#include <iostream>

template<typename T>
void iter(T *array, std::size_t len, void (*func)(const T&))
{
	for (std::size_t i = 0; i < len; i++)
		func(array[i]);
}


#endif //CPP_PISCINE_TEMPHEADER_HPP
