/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:19:18 by wcista            #+#    #+#             */
/*   Updated: 2023/09/17 23:06:56 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("0x0_default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(6) {
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name + "_copy"), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << other.name << " copied!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (!target.size() || !this->name.size())
		return (std::cout << "ClapTrap name cannot be empty." << std::endl, void());

	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		if (!hitPoints)
			std::cout << "ClapTrap " << name << " can't attack. It's already defeated!" << std::endl;
		else if (!energyPoints)
			std::cout << "ClapTrap " << name << " can't attack. No more energy points!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->name.size())
		return (std::cout << "ClapTrap name cannot be empty." << std::endl, void());

	if (hitPoints > 0)
	{
		if (amount > hitPoints)
			hitPoints = 0;
		else
			hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is defeated!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->name.size())
		return (std::cout << "ClapTrap name cannot be empty." << std::endl, void());

	if (hitPoints > 0 && energyPoints > 0) {
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
	}
	else
	{
		if (!hitPoints)
			std::cout << "ClapTrap " << name << " can't be repaired. It's already defeated!" << std::endl;
		else if (!energyPoints)
			std::cout << "ClapTrap " << name << " can't be repaired. No more energy points!" << std::endl;
	}
}
