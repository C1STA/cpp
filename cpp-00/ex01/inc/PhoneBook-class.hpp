/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook-class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:34:28 by wcista            #+#    #+#             */
/*   Updated: 2023/09/06 22:16:15 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact-class.hpp"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>

class	PhoneBook
{
private:
	int			i;
	bool		full;
	Contact		contact[8];
public:
	PhoneBook();
	std::string	prompt;
	void	add();
	void	search();
	bool	exit();
	void	setContact();
	void	displayContact();
};

#endif