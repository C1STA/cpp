/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact-class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:46:33 by wcista            #+#    #+#             */
/*   Updated: 2023/09/06 21:06:38 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact-class.hpp"

static bool	blank_check(std::string nickname)
{
	unsigned long int spaces;

	spaces = 0;
	for(int i = 0; nickname[i]; i++)
	{
		if (nickname[i] == ' ' || nickname[i] == '-')
			spaces++;
	}
	if (spaces == nickname.length())
		return (0);
	return (1);
}

void	Contact::setPhoneNumber()
{
	bool	status = true;

	while (status)
	{
		status = false;
		std::cout << "Please, set a phone number : ";
		getline(std::cin, number);
		if (!number.length() || !blank_check(number))
		{
			std::cout << "Blank phone number" << std:: endl;
			status = true;
		}
		for (int i = 0; number[i] && !status; i++)
		{
			if (!isdigit(number[i]) && number[i] != ' ' && number[i] != '-')
			{
				std::cout << "Accepted format: {0-9; '-'; ' '}" << std::endl;
				status = true;
			}
		}
		if (number.length() < 5 && !status)
		{
			std::cout << "Phone number too short" << std::endl;
			status = true;
		}
		if (number.length() > 20 && !status)
		{
			std::cout << "Phone number too long" << std::endl;
			status = true;
		}
	}
}

void	Contact::setFirstName()
{
	bool	status = true;

	while (status)
	{
		status = false;
		std::cout << "Please, set a first name : ";
		getline(std::cin, f_name);
		if (!f_name.length() || !blank_check(f_name))
		{
			std::cout << "Blank first name" << std::endl;
			status = true;
		}
		for (int i = 0; f_name[i] && !status; i++)
		{
			if (!isalpha(f_name[i]) && f_name[i] != '-' && f_name[i] != ' ')
			{
				std::cout << "Accepted format: {'a-z'; 'A-Z'; '-'; ' '}" << std::endl;
				status = true;
			}
		}
		if (f_name.length() < 3 && !status)
		{
			std::cout << "First name too short" << std::endl;
			status = true;
		}
		if (f_name.length() > 50 && !status)
		{
			std::cout << "First name too long" << std::endl;
			status = true;
		}
	}
}

void	Contact::setLastName()
{
	bool	status = true;

	while (status)
	{
		status = false;
		std::cout << "Please, set a last name : ";
		getline(std::cin, l_name);
		if (!l_name.length() || !blank_check(l_name))
		{
			std::cout << "Blank last name" << std::endl;
			status = true;
		}
		for (int i = 0; l_name[i] && !status; i++)
		{
			if (!isalpha(l_name[i]) && l_name[i] != '-' && l_name[i] != ' ')
			{
				std::cout << "Accepted format: {'a-z'; 'A-Z'; '-'; ' '}" << std::endl;
				status = true;
			}
		}
		if (l_name.length() < 2 && !status)
		{
			std::cout << "Last name too short" << std::endl;
			status = true;
		}
		if (l_name.length() > 50 && !status)
		{
			std::cout << "Last name too long" << std::endl;
			status = true;
		}
	}
}

void	Contact::setNickName()
{
	bool	status = true;

	while (status)
	{
		status = false;
		std::cout << "Please, set a nickname : ";
		getline(std::cin, n_name);
		if (!n_name.length() || !blank_check(n_name))
		{
			std::cout << "Blank nickname" << std::endl;
			status = true;
		}
		for (int i = 0; n_name[i] && !status; i++)
		{
			if (!isprint(n_name[i]))
			{
				std::cout << "Wrong format" << std::endl;
				status = true;
			}
		}
		if (n_name.length() > 30 && !status)
		{
			std::cout << "Nickname too long" << std::endl;
			status = true;
		}
	}
}

void	Contact::setSecret()
{
	bool	status = true;

	while (status)
	{
		status = false;
		std::cout << "Please, set a darkest secret : ";
		getline(std::cin, secret);
		if (!secret.length() || !blank_check(secret))
		{
			std::cout << "Blank secret" << std::endl;
			status = true;
		}
		for (int i = 0; secret[i] && !status; i++)
		{
			if (!isprint(secret[i]))
			{
				std::cout << "Wrong format" << std::endl;
				status = true;
			}
		}
		if (secret.length() > 50 && !status)
		{
			std::cout << "Secret too long" << std::endl;
			status = true;
		}
	}
}

void	Contact::printContacts()
{
	std::cout << "First name : " << f_name << std::endl;
	std::cout << "Last name : " << l_name << std::endl;
	std::cout << "Nickname : " << n_name << std::endl;
	std::cout << "Phone number : " << number << std::endl;
	std::cout << "Darkest secret : " << secret << std::endl;
}

void	trunc(std::string s)
{
	char	tmp[10];

	for (int i = 0; i < 10 && s[i]; i++)
	{
		tmp[i] = s[i];
		tmp[i + 1] = '\0';
	}
	if (s.length() > 10)
		tmp[9] = '.';
	std::cout << std::setw(10) << std::setfill(' ') << std::right << tmp;
}
void	Contact::search_print()
{
	std::cout << "|";
	trunc(f_name);
	std::cout << "|";
	trunc(l_name);
	std::cout << "|";
	trunc(n_name);
	std::cout << "|";
	std::cout << std::endl;
}
