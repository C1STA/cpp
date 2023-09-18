/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:22:27 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:06:06 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain) {
	std::cout << "Default cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "Cat copied!" << std::endl;
}

Cat&	Cat::operator=(const Cat &src) {
	this->type = src.type;
	(*this->brain) = (*src.brain);
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miaw Miaw!" << std::endl;
}

std::string	Cat::getIdea(int n) { 
	return (this->brain->getIdea(n));
}

void	Cat::setIdea(std::string idea, int n) {
	this->brain->setIdea(idea, n);
}
