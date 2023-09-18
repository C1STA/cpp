/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:13:46 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 17:28:13 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main() {

	std::cout << "Creating 4 animals, 2 dogs and 2 cats\n" << std::endl;

	Animal	*animal[4];

	for (int i = 0; i < 4; i++)
	{
		std::cout << "index: " << i << std::endl;
		if (i % 2)
			animal[i] = new Cat;
		else
			animal[i] = new Dog;
	}

	std::cout << "\nDestroying 4 animals, 2 dogs and 2 cats\n" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "index: " << i << std::endl;
		delete animal[i];
	}

	std::cout << "\nCreating a cat\n" << std::endl;

	Cat	*a = new Cat();

	std::cout << "\nSetting ideas ...\n" << std::endl;

	a->setIdea("index_4", 4);
	a->setIdea("index_42", 42);
	a->setIdea("", 4);
	a->setIdea("A test..", 142);

	std::cout << "\nGetting ideas ...\n" << std::endl;


	std::cout << a->getIdea(4) << std::endl;
	std::cout << a->getIdea(42) << std::endl;
	std::cout << a->getIdea(11) << std::endl;
	std::cout << a->getIdea(-3) << std::endl;
	std::cout << a->getIdea(340) << std::endl;

	std::cout << "\nTesting copies ...\n" << std::endl;

	Cat	b(*a); std::cout << std::endl;

	std::cout << b.getIdea(4) << std::endl << std::endl;

	delete a; std::cout << std::endl;
	return (0);
}
