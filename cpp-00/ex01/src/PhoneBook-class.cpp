/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook-class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:52:38 by wcista            #+#    #+#             */
/*   Updated: 2023/09/06 23:21:41 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook-class.hpp"

PhoneBook::PhoneBook()
{
	full = false;
	i = 0;
}

void	PhoneBook::setContact()
{
	contact[i].setFirstName();
	contact[i].setLastName();
	contact[i].setNickName();
	contact[i].setPhoneNumber();
	contact[i].setSecret();
}

void	PhoneBook::add()
{
	if (i == 8)
	{
		full = true;
		i = 0;
	}
	setContact();
	i++;
}
static void	printBorder()
{
	std::cout << "+";
	std::cout << std::setw(10) << std::setfill('-') << '-';
	std::cout << "+";
	std::cout << std::setw(10) << std::setfill('-') << '-';
	std::cout << "+";
	std::cout << std::setw(10) << std::setfill('-') << '-';
	std::cout << "+";
	std::cout << std::setw(10) << std::setfill('-') << '-';
	std::cout << "+" << std::endl;
}

static void	printColumn()
{
	
	printBorder();
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << "INDEX";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << "NICKNAME";
	std::cout << "|" << std::endl;
	printBorder();
}

void	PhoneBook::displayContact()
{
	std::string display;
	bool	status = true;
	long int	index;
	char	*endptr;
	const char	*cstr;

	while (status)
	{
		std::cout << "Please, enter the contact index to be displayed : ";
		getline(std::cin, display);
		cstr = display.c_str();
		index = strtol(cstr, &endptr, 10);
		if (*endptr != '\0' && endptr != cstr)
			std::cout << "Wrong format" << std::endl;
		else
		{
			if ((index > 0 && index <= i && !full) || (index > 0 && index <= 8 && full))
			{
				contact[index - 1].printContacts();
				status = false;
			}
			else
				std::cout << "Invalid index" << std::endl;
		}
	}
}

void	PhoneBook::search()
{
	int	j = 0;
	int	k = i;

	if (!k && !full)
	{
		std::cout << "Empty phonebook" << std::endl;
		return ;
	}
	printColumn();
	if (full)
		k = 8;
	while (j < k)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::setfill(' ') << std::right << (j + 1);
		contact[j].search_print();
		printBorder();
		j++;
	}
	displayContact();
}

bool	PhoneBook::exit()
{
	std::string	buffer;

	std::cout << "After this operation, every contact saved will be lost." << std::endl;
	std::cout << "Do you want to continue ? [Y/n] ";
	getline(std::cin, buffer);
	if (buffer == "y" || buffer == "Y")
		return (true);
	else
		std::cout << "Abort." << std::endl;
	return (false);
}
