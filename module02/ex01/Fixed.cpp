/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:45:25 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 13:23:52 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed( const float x)
{
	std::cout << "Dloat constructor called\n";
	fixed_point = (roundf(x * (1 << b)));
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called\n";
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
    return os;
}
