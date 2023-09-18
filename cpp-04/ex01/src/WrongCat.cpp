/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:04:53 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:09:03 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {
	std::cout << "Default Wrong Cat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
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
