/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:54:33 by wcista            #+#    #+#             */
/*   Updated: 2023/09/09 20:02:31 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Creating zombie ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying zombie ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
