#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a(-4, 0);
	Point b(-0.8, 9.6);
	Point c(1.333, 5.333);
	Point point(0, 5);
	std::cout << bsp(a, b, c, point);
}
