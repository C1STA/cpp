/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:21:51 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 16:10:29 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat& other);
	Cat&	operator=(const Cat& src);
	virtual ~Cat();

	void	makeSound() const;

	std::string	getIdea(int n);
	void	setIdea(std::string idea, int n);
};

#endif