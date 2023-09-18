/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:08:45 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 16:10:25 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog& other);
	Dog&	operator=(const Dog& src);
	virtual ~Dog();

	void	makeSound() const;

	std::string	getIdea(int n);
	void	setIdea(std::string idea, int n);
};

#endif