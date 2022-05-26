//
// Created by Johnny Zaev on 26.05.2022.
//

#ifndef CPP_PISCINE_BRAIN_HPP
#define CPP_PISCINE_BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	~Brain();
	Brain(const Brain &b);
	Brain &operator= (const Brain &b);

	std::string ideas[100];
};


#endif //CPP_PISCINE_BRAIN_HPP
