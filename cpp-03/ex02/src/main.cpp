/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:19:15 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 01:01:56 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main() {

	ClapTrap	claptrap1("Robot1");
	ClapTrap	claptrap2("Robot2");

	ScavTrap	scavtrap1("Guard1");
	ScavTrap	scavtrap2("Guard2");

	FragTrap	fragtrap1("Fragger1");
	FragTrap	fragtrap2("Fragger2");

	claptrap1.attack("Target");
	scavtrap1.attack("Target");
	fragtrap1.attack("Target");

	scavtrap1.guardGate();
	fragtrap1.highFiveGuys();

	return (0);
}
