/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:43:12 by wcista            #+#    #+#             */
/*   Updated: 2023/09/11 21:08:24 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void	HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
