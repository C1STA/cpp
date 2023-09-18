/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:50:39 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 03:03:33 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "Default Wrong Animal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "Wrong Animal copied." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src) {
	this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Wrong Wrong!" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}
