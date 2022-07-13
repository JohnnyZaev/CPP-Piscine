//
// Created by Johnny Zaev on 30.06.2022.
//

#include <iostream>

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

int main( void )
{
	int a = 5;
	int b(a);
	int c(10);
	std::cout << a << b << c << std::endl;
	swap(a, c);
	std::cout << a << b << c << std::endl;
	std::cout << ::min(a, c) << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::min(c, b) << std::endl;
	std::cout << ::max(b, c) << std::endl;
	std::string str1 = "abc";
	std::string str2 = "cba";
	std::cout << str1 << str2 << std::endl;
	swap(str1, str2);
	std::cout << str1 << str2 << std::endl;
	std::cout << ::min(str1, str2) << std::endl;
	std::cout << ::max(str1, str2) << std::endl;
	return EXIT_SUCCESS;
}