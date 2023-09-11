/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:52:22 by wcista            #+#    #+#             */
/*   Updated: 2023/09/09 20:05:59 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie = NULL;

	if (N <= 0)
	{
		std::cerr << "N("  << N << ") must be superior to zero." << std::endl;
		return (zombie);
	}
	try
	{
		zombie = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombie[i].setName(name);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "bad alloc" << std::endl;
		delete[] zombie;
		zombie = NULL;
	}
	return (zombie);
}
