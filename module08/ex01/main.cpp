//
// Created by Johnny Zaev on 30.06.2022.
//

#include "Span.hpp"

int main( void )
{
	int main()
	{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;`
	return EXIT_SUCCESS;
}