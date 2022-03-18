/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:26:02 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 15:17:14 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_lastContact = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::quit(void)
{
	exit(EXIT_SUCCESS);
}

void	PhoneBook::add(void)
{
	if (this->_contacts[this->_lastContact % 8].setContact(this->_lastContact % 8))
		PhoneBook::_lastContact++;
}

void	PhoneBook::search(void)
{
	std::string	line;
	int			index;
	
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for(int i = 0; i < 8; i++)
		this->_contacts[i].displayPreview();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Write index of contact to display full information: ";
	std::getline(std::cin, line);
	index = std::stoi(line);
	if (index < 0 || index > 7)
	{
		std::cout << std::endl << "Index error" << std::endl << std::endl;
		return ;
	}
	this->_contacts[index].displayFullInfo();
	
}
