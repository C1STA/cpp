/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact-class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:46:30 by wcista            #+#    #+#             */
/*   Updated: 2023/09/06 21:04:41 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact
{
private:
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	number;
	std::string	secret;
public:
	void	setFirstName();
	void	setLastName();
	void	setNickName();
	void	setPhoneNumber();
	void	setSecret();
	void	printContacts();
	void	search_print();
};

#endif