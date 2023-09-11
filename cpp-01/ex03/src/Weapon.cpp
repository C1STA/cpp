/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:43:18 by wcista            #+#    #+#             */
/*   Updated: 2023/09/11 21:27:53 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}
