/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:37:08 by wcista            #+#    #+#             */
/*   Updated: 2023/09/13 20:03:55 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();

	Fixed& operator=(const Fixed& src);

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif