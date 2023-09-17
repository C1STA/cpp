/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:19:15 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 00:30:37 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main() {

	ScavTrap	a("A");
	ScavTrap	b("B");

	for (int i = 0; i < 6; i++)
	{
		a.attack("B");
		b.takeDamage(20);
	}
	a.guardGate();
	for (int i = 0; i < 44; i++)
	{
		a.attack("an intruder");
	}
	a.attack("an intruder");
	return (0);
}
