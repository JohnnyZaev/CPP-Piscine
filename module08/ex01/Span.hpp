//
// Created by Johnny Zaev on 21.07.2022.
//

#ifndef CPP_PISCINE_SPAN_HPP
#define CPP_PISCINE_SPAN_HPP

#include <iostream>

class Span {
private:
	unsigned int _maxSize;
	unsigned int _currentSize;
	unsigned int _shortestSpan;
	unsigned int _longestSpan;
	std::vector<int> _data;
public:

	Span(void);
	Span(unsigned int maxSize);
	Span(const Span &src);
	~Span(void);
	Span &operator=( const Span &rhs );
	void addNumber(int number);
	void fillSpan();
	void shortestSpan();
	void longestSpan();
};


#endif //CPP_PISCINE_SPAN_HPP
