/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:29:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 15:40:27 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#   define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	int 				fixed_point;
	static const int	b = 8;
	public:
		Fixed();
		Fixed( const int x );
		Fixed( const float x );
		Fixed( const Fixed &other );
		~Fixed();
		Fixed&	operator = (const Fixed &Fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed&	operator++ (); //Prefix increment operator
		Fixed	operator++ (int inc);
		Fixed&	operator-- (); //Prefix decrement operator
		Fixed	operator-- (int dec);
		Fixed	operator+ (Fixed ARG);
		Fixed	operator- (Fixed ARG);
		Fixed	operator* (Fixed ARG);
		Fixed	operator/ (Fixed ARG);
		bool	operator> (Fixed ARG);
		bool	operator>= (Fixed ARG);
		bool	operator< (Fixed ARG);
		bool	operator<= (Fixed ARG);
		bool	operator== (Fixed ARG);
		bool	operator!= (Fixed ARG);
		static Fixed&	min(Fixed& first_arg, Fixed& second_arg);
		static const Fixed&	min(const Fixed& first_arg, const Fixed& second_arg);
		static Fixed&	max(Fixed& first_arg, Fixed& second_arg);
		static const Fixed&	max(const Fixed& first_arg, const Fixed& second_arg);
};

std::ostream &operator << (std::ostream& os, const Fixed& P);

#endif