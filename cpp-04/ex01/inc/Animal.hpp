/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:45:04 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:37:03 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& other);
	Animal&	operator=(const Animal& src);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string getType() const;
};

#endif