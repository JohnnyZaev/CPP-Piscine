//
// Created by Johnny Zaev on 25.07.2022.
//

#ifndef CPP_PISCINE_MUTANTSTACK_HPP
#define CPP_PISCINE_MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	iterator begin() const { return this->c.begin(); }
	iterator end() const { return this->c.end(); }
};

#endif //CPP_PISCINE_MUTANTSTACK_HPP
