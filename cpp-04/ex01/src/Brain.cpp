/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:50:48 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:06:00 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "Default brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "unknown";
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copied!" << std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	if (this != &src)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

std::string	Brain::getIdea(int n) {
	if (n < 0 || n >= 100)
		return ("Invalid index.");
	return (ideas[n]);
}

void	Brain::setIdea(std::string idea, int n) {
	if (n < 0 || n >= 100)
		return (std::cout << "Invalid index." << std::endl, void());
	if (!idea.size())
		return (std::cout << "Idea can't be empty." << std::endl, void());
	this->ideas[n] = idea;
}
