//
// Created by Johnny Zaev on 21.07.2022.
//

#ifndef CPP_PISCINE_SPAN_HPP
#define CPP_PISCINE_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
private:
	unsigned int _maxSize;
	unsigned int _currentSize;
	unsigned int _shortestSpan;
	unsigned int _longestSpan;
	bool _needToFindSpans;
	std::vector<int> _data;
	void findSpans();
public:
	Span(unsigned int maxSize);
	~Span(void);
	void addNumber(int number);
	void fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();
	std::vector<int>::iterator current();
};


#endif //CPP_PISCINE_SPAN_HPP
