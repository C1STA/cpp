/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:19:15 by wcista            #+#    #+#             */
/*   Updated: 2023/09/17 23:08:53 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main() {

	ClapTrap a("A");
	ClapTrap b("B");
	ClapTrap c("");

	a.attack("B");
	b.takeDamage(6);
	b.beRepaired(1);
	a.attack("B");
	b.takeDamage(6);
	b.attack("A");
	c.attack("A");
	return (0);
}
