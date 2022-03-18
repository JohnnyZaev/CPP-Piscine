/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:23:32 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 15:12:13 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string	line;

	std::cout << "Hello friend! This is a phone book." << std::endl;
	std::cout << "You can write ADD to add contact to phone book." << std::endl;	
	std::cout << "You can write SEARCH to find contact that you want." << std::endl;
	std::cout << "Or you can write EXIT to close the programm." << std::endl;
	std::cout << "Phone book can store only 8 contacts" << std::endl;
	std::cout << "HAVE FUN!" << std::endl;

	while (true)
	{
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << "Don't try this dirty trick" << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		else if (!line.compare("EXIT"))
			phoneBook.quit();
		else if (!line.compare("ADD"))
			phoneBook.add();
		else if (!line.compare("SEARCH"))
			phoneBook.search();
		else
			std::cout << "PhoneBook can only accept ADD SEARCH EXIT commands" << std::endl;	
	}
}