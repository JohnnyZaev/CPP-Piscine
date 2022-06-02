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
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
};


#endif //CPP_PISCINE_BUREAUCRAT_HPP
