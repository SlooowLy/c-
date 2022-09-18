/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:45:25 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 13:26:01 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed( const float x)
{
	std::cout << "float constructor called\n";
	fixed_point = (roundf(x * (1 << b)));
}

Fixed::Fixed(const int x)
{
	std::cout << "int constructor called\n";
	fixed_point = (x << b);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fixed_point = 0;
}

Fixed& Fixed::operator= (const Fixed &old)
{
	std::cout << "Copy assignment operator called\n";
	fixed_point = old.fixed_point;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return fixed_point;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	fixed_point = raw;
}

int Fixed::toInt( void ) const
{
	return roundf(toFloat());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (float)(1 << b));
}

std::ostream& operator<<(std::ostream& os, const Fixed &P)
{
	os << P.toFloat();
    // os << fixed_point << '/' << "oy" << '/' << "toy";
    return os;
}

Fixed&	Fixed::operator++ ()
{
	fixed_point++;
	return *this;
}

Fixed&	Fixed::operator-- ()
{
	fixed_point--;
	return *this;
}

Fixed	Fixed::operator++ (int inc)
{
	Fixed tmp = *this;
	if (inc)
		fixed_point += inc;
	else
		fixed_point++;
	return tmp;
}

Fixed	Fixed::operator+ (Fixed ARG)
{
	Fixed	tmp(ARG.toFloat() + toFloat());

	return tmp;
}

Fixed	Fixed::operator-- (int inc)
{
	Fixed tmp = *this;
	if (inc)
		fixed_point -= inc;
	else
		fixed_point--;
	return tmp;
}

Fixed	Fixed::operator* (Fixed ARG)
{
	Fixed tmp (toFloat() * ARG.toFloat());
	
	return tmp;
}

Fixed	Fixed::operator/ (Fixed ARG)
{
	Fixed tmp (toFloat() / ARG.toFloat());
	
	return tmp;
}

bool	Fixed::operator> (Fixed ARG)
{
	if (fixed_point > ARG.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator>= (Fixed ARG)
{
	if (fixed_point >= ARG.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator< (Fixed ARG)
{
	if (fixed_point < ARG.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator<= (Fixed ARG)
{
	if (fixed_point <= ARG.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator== (Fixed ARG)
{
	if (fixed_point == ARG.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator!= (Fixed ARG)
{
	if (fixed_point != ARG.fixed_point)
		return true;
	return false;
}

Fixed&	Fixed::min(Fixed& first_arg, Fixed& second_arg)
{
	if (first_arg.getRawBits() > second_arg.getRawBits())
		return second_arg;
	return first_arg;
}

const Fixed&	Fixed::min(const Fixed& first_arg, const Fixed& second_arg)
{
	if (first_arg.getRawBits() > second_arg.getRawBits())
		return second_arg;
	return first_arg;
}

Fixed&	Fixed::max(Fixed& first_arg, Fixed& second_arg)
{
	if (first_arg.getRawBits() < second_arg.getRawBits())
		return second_arg;
	return first_arg;
}

const Fixed&	Fixed::max(const Fixed& first_arg, const Fixed& second_arg)
{
	if (first_arg.getRawBits() < second_arg.getRawBits())
		return second_arg;
	return first_arg;
}
