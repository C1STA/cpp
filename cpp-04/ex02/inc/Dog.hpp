/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:08:45 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:57:02 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <cstring>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
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