/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:26:02 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 17:18:46 by gvarys           ###   ########.fr       */
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
	int			index;
	
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for(int i = 0; i < 8; i++)
		this->_contacts[i].displayPreview();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Write index of contact to display full information: ";
	while (!(std::cin >> index)) 
	{
		std::cout << std::endl << "Enter a valid integer, try again: ";
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		clearerr(stdin);
	}
	if (index < 0 || index > 7)
	{
		std::cout << std::endl << "Index error\n"<< std::endl;
		return ;
	}
	this->_contacts[index].displayFullInfo();
	
}
