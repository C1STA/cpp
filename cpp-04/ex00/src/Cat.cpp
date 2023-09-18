/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:22:27 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 02:23:59 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Default cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	*this = other;
	std::cout << "Cat copied!" << std::endl;
}

Cat&	Cat::operator=(const Cat &src) {
	this->type = src.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miaw Miaw!" << std::endl;
}
