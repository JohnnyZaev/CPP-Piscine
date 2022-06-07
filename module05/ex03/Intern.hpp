//
// Created by Johnny Zaev on 07.06.2022.
//

#ifndef CPP_PISCINE_INTERN_HPP
#define CPP_PISCINE_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &other);
	~Intern();

	Intern &operator=(const Intern &other);
	Form *makeForm(std::string name, std::string target);
};


#endif //CPP_PISCINE_INTERN_HPP
