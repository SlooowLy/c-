/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:29:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 13:24:28 by aaitoual         ###   ########.fr       */
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
		Fixed &operator = (const Fixed &Fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator << (std::ostream& os, const Fixed& P);

#endif