//
// Created by Johnny Zaev on 13.07.2022.
//

#ifndef CPP_PISCINE_TEMPHEADER_HPP
#define CPP_PISCINE_TEMPHEADER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T c(a); a = b; b = c;
}

template<typename T>
const T &min(const T &a, const T &b)
{
	return !(b < a) ? a : b;
}

template<typename T>
const T &max(const T &a, const T &b)
{
	return a < b ? b : a;
}

#endif //CPP_PISCINE_TEMPHEADER_HPP
