/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:33:32 by wcista            #+#    #+#             */
/*   Updated: 2023/09/17 23:16:06 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Default ScavTrap constructor called!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copied!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src) {
	if (this != & src)
		ClapTrap::operator=(src);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (!target.size() || !this->name.size())
		return (std::cout << "ScavTrap name cannot be empty." << std::endl, void());

	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		if (!hitPoints)
			std::cout << "ScavTrap " << name << " can't attack. It's already defeated!" << std::endl;
		else if (!energyPoints)
			std::cout << "ScavTrap " << name << " can't attack. No more energy points!" << std::endl;
	}
}
