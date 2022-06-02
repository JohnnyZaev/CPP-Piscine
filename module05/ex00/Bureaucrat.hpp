//
// Created by Johnny Zaev on 02.06.2022.
//

#ifndef CPP_PISCINE_BUREAUCRAT_HPP
#define CPP_PISCINE_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);
	int getGrade();
	std::string getName();
	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);


#endif //CPP_PISCINE_BUREAUCRAT_HPP
