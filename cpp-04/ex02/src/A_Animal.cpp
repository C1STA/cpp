/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:46:53 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:52:34 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/A_Animal.hpp"

A_Animal::A_Animal() : type("0x0_default") {
	std::cout << "Default animal constructor called." << std::endl;
}

A_Animal::A_Animal(const std::string& type) : type(type) {
	std::cout << "Animal overload constructor called." << std::endl;
}

A_Animal::A_Animal(const A_Animal& other) {
	this->type = other.type;
	std::cout << "Animal copied!" << std::endl;
}

A_Animal&	A_Animal::operator=(const A_Animal& src) {
	this->type = src.type;
	return (*this);
}

A_Animal::~A_Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

std::string	A_Animal::getType() const {
	return (type);
}
