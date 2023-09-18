/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:46:53 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 02:16:02 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("0x0_default") {
	std::cout << "Default animal constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Animal overload constructor called." << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal copied!" << std::endl;
}

Animal&	Animal::operator=(const Animal& src) {
	this->type = src.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal makes a sound." << std::endl;
}

std::string	Animal::getType() const {
	return (type);
}
