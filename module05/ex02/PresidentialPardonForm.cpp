//
// Created by Johnny Zaev on 07.06.2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &form) : Form("PresidentialPardonForm", 25, 5, form.getTarget()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other) {
	setTarget(other.getTarget());
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		std::cout << "can not execute not signed form" << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw GradeTooLowException();
}