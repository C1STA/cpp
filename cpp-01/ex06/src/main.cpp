/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:32:15 by wcista            #+#    #+#             */
/*   Updated: 2023/09/13 00:44:12 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	prompt;

	while (1)
	{
		std::cout << "Harl: ";
		std::getline(std::cin, prompt);
		if (prompt == "exit" || prompt == "EXIT")
			return (0);
		if (prompt != "")
			harl.complain(prompt);
	}
	return (0);
}
