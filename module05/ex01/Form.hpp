//
// Created by Johnny Zaev on 04.06.2022.
//

#ifndef CPP_PISCINE_FORM_HPP
#define CPP_PISCINE_FORM_HPP

#include <iostream>

class Form {
private:
	const std::string _name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute
public:
	Form();
	Form(const Form &other);
	~Form();

};


#endif //CPP_PISCINE_FORM_HPP
