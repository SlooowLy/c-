/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:29:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/15 15:17:43 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#   define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	int 				fixed_point;
	static const int	b = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed &operator= (const Fixed&);
		int	get_base();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif