/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:37:11 by wcista            #+#    #+#             */
/*   Updated: 2023/09/17 18:42:46 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
}

Fixed::Fixed(int const n) {
	this->fixedPointValue = n << this->fractionalBits;
}

Fixed::Fixed(float const n) {
	this->fixedPointValue = roundf(n * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::~Fixed() {
}

Fixed& Fixed::operator=(const Fixed& src) {
	if (this != &src)
		this->fixedPointValue = src.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}

int	Fixed::getRawBits() const {
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}

float	Fixed::toFloat() const {
	return ((float)fixedPointValue / (1 << fractionalBits));
}

int	Fixed::toInt() const {
	return (fixedPointValue >> fractionalBits);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator++() {
	this->fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	const Fixed	dest(*this);
	this->fixedPointValue++;
	return (dest);
}

Fixed&	Fixed::operator--() {
	this->fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	const Fixed	dest(*this);
	this->fixedPointValue--;
	return (dest);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a <= b)
		return a;
	else
		return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a >= b)
		return a;
	else
		return b;
}

