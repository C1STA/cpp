/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:09:13 by wcista            #+#    #+#             */
/*   Updated: 2023/09/09 21:33:14 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of 'string' in memory : " << &string << std::endl;
	std::cout << "Address stored in 'stringPTR' : " << stringPTR << std::endl;
	std::cout << "Address stored in 'stringREF' : " << &stringREF << std::endl;
	
	std::cout << "Value of 'string' : " << string << std::endl;
	std::cout << "Pointed value by 'stringPTR' : " << *stringPTR << std::endl;
	std::cout << "Pointed value by 'stringREF' : " << stringREF << std::endl;

	return (0);
}
