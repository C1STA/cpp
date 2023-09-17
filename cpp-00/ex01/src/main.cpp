/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:12:09 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 01:34:31 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact-class.hpp"
#include "../inc/PhoneBook-class.hpp"

int	main()
{
	PhoneBook	Repository;

	std::cout << "Welcome to your awesome phonebook !" << std::endl;
	std::cout << "Available commands are : ADD, SEARCH and EXIT" << std::endl;
	while (1)
	{
		std::cout << "PhoneBook: ";
		getline(std::cin, Repository.prompt);
		if (std::cin.eof() || std::cin.fail())
			return (std::cout << "Wrong input!" << std::endl, 1);
		if (Repository.prompt == "ADD")
			Repository.add();
		if (Repository.prompt == "SEARCH")
			Repository.search();
		if (Repository.prompt == "EXIT")
			if (Repository.exit())
				return (0);
	}
	return (0);
}
