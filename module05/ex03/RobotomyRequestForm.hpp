//
// Created by Johnny Zaev on 07.06.2022.
//

#ifndef CPP_PISCINE_ROBOTOMYREQUESTFORM_HPP
#define CPP_PISCINE_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <chrono>
#include <thread>

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm & form);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm &other);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP_PISCINE_ROBOTOMYREQUESTFORM_HPP
