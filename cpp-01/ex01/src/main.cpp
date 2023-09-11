/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:52:03 by wcista            #+#    #+#             */
/*   Updated: 2023/09/09 20:06:37 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{
	Zombie	*horde;

	horde = zombieHorde(5, "Ken");
	if (!horde)
		return (1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl << "Pointer value for zombie[" << i << "]: " << std::hex << &horde[i] << std::endl;
		horde[i].announce();
	}
	delete[] horde;
}
