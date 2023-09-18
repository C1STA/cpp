/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:45:04 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:47:30 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include <cstring>

class A_Animal {
protected:
	std::string	type;
public:
	A_Animal();
	A_Animal(const std::string& type);
	A_Animal(const A_Animal& other);
	A_Animal&	operator=(const A_Animal& src);
	virtual ~A_Animal();

	virtual void	makeSound() const = 0;
	std::string getType() const;
};

#endif