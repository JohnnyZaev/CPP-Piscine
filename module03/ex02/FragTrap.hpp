//
// Created by Johnny Zaev on 19.05.2022.
//

#ifndef CPP_PISCINE_FRAGTRAP_HPP
#define CPP_PISCINE_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &b);
	FragTrap& operator= (const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void);
};


#endif //CPP_PISCINE_FRAGTRAP_HPP
