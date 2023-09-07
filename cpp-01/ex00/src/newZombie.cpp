/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:59:07 by wcista            #+#    #+#             */
/*   Updated: 2023/09/07 12:51:12 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*z1 = NULL;

	try
	{
		z1 = new Zombie(name);
	}
	catch(std::bad_alloc& e)
	{
		delete z1;
		z1 = NULL;
	}
	return (z1);
}
