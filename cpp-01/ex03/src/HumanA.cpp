/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:42:51 by wcista            #+#    #+#             */
/*   Updated: 2023/09/11 20:33:24 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}
