/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:46:18 by wcista            #+#    #+#             */
/*   Updated: 2023/09/09 16:49:07 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie(void);
	void	announce();
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);