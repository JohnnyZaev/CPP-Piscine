/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:21:23 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 17:14:37 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_index = 9;
}

Contact::~Contact()
{
}

bool	Contact::_checkAndSet(const char *welcomeMessage, std::string &infoToSet)
{
	std::cout << welcomeMessage << std::endl;
	std::getline(std::cin, infoToSet);
	if (std::cin.eof() || !infoToSet.length())
	{
		std::cout << "cannot create empty contact" << std::endl;
		this->_index = 9;
		return (false);
	}
	return (true);
}

bool	Contact::setContact(id_t index)
{
	this->_index = index;
	if (!this->_checkAndSet("Write your first name", this->_firstName))
		return(false);
	if (!this->_checkAndSet("Write your last name", this->_lastName))
		return(false);
	if (!this->_checkAndSet("Write your nickname", this->_nickname))
		return(false);
	if (!this->_checkAndSet("Write your phone number", this->_phoneNumber))
		return(false);
	if (!this->_checkAndSet("Write your darkest secret", this->_darkestSecret))
		return(false);
	return (true);
}

static void	displayHelper(std::string info)
{
	std::cout << "|";
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;
}

void	Contact::displayPreview(void)
{
	if (this->_index == 9)
		return ;
	std::cout << "|" << std::setw(10) << this->_index;
	displayHelper(this->_firstName);
	displayHelper(this->_lastName);
	displayHelper(this->_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::displayFullInfo(void)
{
	if (this->_index == 9)
	{
		std::cout << std::endl << "Index error" << std::endl << std::endl;
		return ;
	}
	std::cout << std::endl << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << "\n" << std::endl;
}