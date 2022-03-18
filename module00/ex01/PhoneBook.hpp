/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:22:09 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 12:02:44 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
	
	Contact _contacts[8];
	int	_lastContact;
	
public:
	PhoneBook();
	~PhoneBook();

	void	quit(void);
	void	add(void);
	void	search(void);
};

#endif