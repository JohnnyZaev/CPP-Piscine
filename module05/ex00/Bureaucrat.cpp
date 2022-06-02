//
// Created by Johnny Zaev on 02.06.2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anonymous"), _grade(150) {
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat is destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	try {
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception &e) {
		std::cout << "Problem exist between keyboard and chair" << std::endl;
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	_grade = other.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
	*this = other;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "BureaucratException: Grade too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "BureaucratException: Grade too High";
}

void Bureaucrat::decrementGrade() {
	try{
		if (++_grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception &e) {
		std::cout << "Problem exist between keyboard and chair" << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	try{
		if (--_grade > 1)
			throw GradeTooHighException();
	}
	catch (std::exception &e) {
		std::cout << "Problem exist between keyboard and chair" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}