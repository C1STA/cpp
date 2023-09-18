/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:50:39 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:22:34 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong Animal") {
	std::cout << "Default Wrong Animal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "Wrong Animal overload constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
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
