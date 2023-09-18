/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:13:46 by wcista            #+#    #+#             */
/*   Updated: 2023/09/18 03:26:45 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main() {

	std::cout << "\n00\n" << std::endl;

	const Animal* meta = new Animal();

	std::cout << "\n01\n" << std::endl;

	const Animal* dog = new Dog();

	std::cout << "\n02\n" << std::endl;

	const Animal* cat = new Cat();

	std::cout << "\n03\n" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();

	std::cout << "\n04\n" << std::endl;

	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n05\n" << std::endl;

	std::cout << meta->getType() << " : ";
	meta->makeSound();

	std::cout << "\n06\n" << std::endl;

	std::cout << dog->getType() << " : ";
	dog->makeSound();

	std::cout << "\n07\n" << std::endl;

	std::cout << cat->getType() << " : ";
	cat->makeSound();

	std::cout << "\n08\n" << std::endl;
	std::cout << wrongAnimal->getType() << " : ";
	wrongAnimal->makeSound();

	std::cout << "\n09\n" << std::endl;
	std::cout << wrongCat->getType() << " : ";
	wrongCat->makeSound();

	std::cout << "\n10\n" << std::endl;
	delete meta;
	std::cout << "\n11\n" << std::endl;
	delete cat;
	std::cout << "\n12\n" << std::endl;
	delete dog;
	std::cout << "\n13\n" << std::endl;
	delete wrongAnimal;
	std::cout << "\n14\n" << std::endl;
	delete wrongCat;

	return (0);
}
