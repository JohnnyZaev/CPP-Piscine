//
// Created by Johnny Zaev on 07.06.2022.
//

#ifndef CPP_PISCINE_SHRUBBERYCREATIONFORM_HPP
#define CPP_PISCINE_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP_PISCINE_SHRUBBERYCREATIONFORM_HPP
