//
// Created by Johnny Zaev on 04.06.2022.
//

#include "Form.hpp"

Form::Form() : _name("Form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::~Form() {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {

}

Form &Form::operator=(const Form &other) {
	*this(Form(other));
	return *this;
}