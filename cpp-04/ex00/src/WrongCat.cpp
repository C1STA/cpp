/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:04:53 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 03:13:16 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default Wrong Cat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	*this = other;
	std::cout << "Wrong Cat copied." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src) {
	this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat destructor called." << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong Miaw!" << std::endl;
}
