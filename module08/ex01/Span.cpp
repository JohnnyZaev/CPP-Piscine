//
// Created by Johnny Zaev on 21.07.2022.
//

#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize), _currentSize(0), _shortestSpan(0), _longestSpan(0), _needToFindSpans(true) {}

Span::~Span() {}

void Span::addNumber(int number) {
	if (_currentSize < _maxSize) {
		_data.push_back(number);
		_currentSize++;
		_needToFindSpans = true;
	}
	else
		throw std::logic_error("Cant add more data to span");
}

void Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for (; begin != end; begin++)
		*begin = rand() % INT_MAX;
	_needToFindSpans = true;
}

void Span::findSpans() {
	if (_currentSize < 2)
		throw std::logic_error("Need more elements to find a span");
	std::vector<int> tmp = _data;
	sort(tmp.begin(), tmp.end());
	_longestSpan = *(tmp.end() - 1) - *tmp.begin();
	unsigned int shortestSpan = UINT_MAX;
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1 && shortestSpan != 0; it++)
	{
		unsigned int temp = *(it + 1) - *it;
		if (temp < shortestSpan)
			shortestSpan = temp;
	}
	_shortestSpan = shortestSpan;
	_needToFindSpans = false;
}

unsigned int Span::longestSpan() {
	if (_needToFindSpans)
		findSpans();
	return _longestSpan;
}

unsigned int Span::shortestSpan() {
	if (_needToFindSpans)
		findSpans();
	return _shortestSpan;
}

std::vector<int>::iterator Span::begin() {
	return _data.begin();
}

std::vector<int>::iterator Span::end() {
	return _data.end();
}

std::vector<int>::iterator Span::current() {
	return _data.begin() + _currentSize;
}

