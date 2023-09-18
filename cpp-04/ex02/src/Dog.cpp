/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:11:56 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:58:31 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : A_Animal("Dog"), brain(new Brain) {
	std::cout << "Default dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : A_Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "Dog copied!" << std::endl;
}

Dog&	Dog::operator=(const Dog &src) {
	this->type = src.type;
	(*this->brain) = (*src.brain);
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}

std::string	Dog::getIdea(int n) { 
	return (this->brain->getIdea(n));
}

void	Dog::setIdea(std::string idea, int n) {
	this->brain->setIdea(idea, n);
}
