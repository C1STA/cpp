/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:02:48 by wcista            #+#    #+#             */
/*   Updated: 2023/09/07 12:50:58 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{
	Zombie	*z1 = newZombie("Michael");
	if (!z1)
		return (std::cerr << "bad alloc" << std::endl, 1);

	z1->announce();
	randomChump("Brandon");
	delete z1;
	return (0);
}
