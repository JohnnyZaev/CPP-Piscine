//
// Created by Johnny Zaev on 07.06.2022.
//

#include "ShrubberyCreationForm.hpp"

bool ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		return (this->_isSigned = true);
	else
		throw GradeTooLowException();
}