/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:36:57 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 01:02:27 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& src) {
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void	FragTrap::highFiveGuys() {
	if (hitPoints)
		std::cout << "FragTrap " << name << " agreed for a high five!" << std::endl;
	else
		std::cout << "FiveTrap " << name << " can't agree for a high five. It's already defeated!" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (!target.size() || !this->name.size())
		return (std::cout << "FragTrap name cannot be empty." << std::endl, void());

	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		if (!hitPoints)
			std::cout << "FragTrap " << name << " can't attack. It's already defeated!" << std::endl;
		else if (!energyPoints)
			std::cout << "FragTrap " << name << " can't attack. No more energy points!" << std::endl;
	}
}
