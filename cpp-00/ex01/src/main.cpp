/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:12:09 by wcista            #+#    #+#             */
/*   Updated: 2023/09/06 23:06:21 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>
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
		if (Repository.prompt == "ADD")
			Repository.add();
		else if (Repository.prompt == "SEARCH")
			Repository.search();
		else if (Repository.prompt == "EXIT")
			if (Repository.exit())
				return (0);
	}
	return (0);
}
