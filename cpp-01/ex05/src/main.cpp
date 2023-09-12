/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:53:37 by wcista            #+#    #+#             */
/*   Updated: 2023/09/12 22:28:38 by wcista           ###   ########.fr       */
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
		harl.complain(prompt);
	}
	return (0);
}
