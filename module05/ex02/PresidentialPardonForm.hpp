//
// Created by Johnny Zaev on 07.06.2022.
//

#ifndef CPP_PISCINE_PRESIDENTIALPARDONFORM_HPP
#define CPP_PISCINE_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP_PISCINE_PRESIDENTIALPARDONFORM_HPP
