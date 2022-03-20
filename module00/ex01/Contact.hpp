/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:11:15 by gvarys            #+#    #+#             */
/*   Updated: 2022/03/18 17:14:46 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
private:

	id_t		_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

	bool	_checkAndSet(const char *welcomeMessage, std::string &infoToSet);
	
public:
	Contact();
	~Contact();

	bool	setContact(id_t index);
	void	displayPreview(void);
	void	displayFullInfo(void);
	
};

#endif