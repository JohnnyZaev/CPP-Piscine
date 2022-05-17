#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "mypart" << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a == b) << std::endl;
	Fixed const c( Fixed( 5.f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 5.f ) / Fixed( 2 ) );
	std::cout << c << " " << d << " " << e << std::endl;
	return 0;
}