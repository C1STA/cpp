/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:18:58 by wcista            #+#    #+#             */
/*   Updated: 2023/09/11 21:07:45 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	void	attack();
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
};

#endif