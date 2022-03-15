/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:26:02 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/15 14:48:20 by gvarys           ###   ########.fr       */
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
	std::cout << "EXIT" << std::endl;
	exit(EXIT_SUCCESS);
}

void	PhoneBook::add(void)
{
	if (this->_contacts[this->_lastContact % 8].setContact())
		PhoneBook::_lastContact++;
}
