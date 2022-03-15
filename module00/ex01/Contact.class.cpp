/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:21:23 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/15 14:52:07 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool	Contact::setContact(void)
{
	std::cout << "Write first name" << std::endl;
	std::getline(std::cin, Contact::_firstName);
	if (std::cin.eof() || !Contact::_firstName.length())
	{
		std::cout << "cannot create empty contact" << std::endl;
		memset(this, 0, sizeof(Contact));
		std::cout << this->_firstName << std::endl;
		return (false);
	}
	std::cout << this->_firstName << std::endl;
	return (true);
}