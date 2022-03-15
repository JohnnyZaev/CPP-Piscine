/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:23:32 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/15 14:41:55 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string	line;

	while (true)
	{
		std::getline(std::cin, line);
		if (std::cin.eof())
			phoneBook.quit();
		if (!line.compare("EXIT"))
			phoneBook.quit();
		if (!line.compare("ADD"))
			phoneBook.add();
	}
}