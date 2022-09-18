/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 00:53:19 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 13:27:10 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class   Point
{
	Fixed const x;
	Fixed const y;
	public:
		Point();
		Point(const Point&);
		Point& operator = (const Point&);
		Point(const float x, const float y);
		float	get(int i) const;
		~Point();
};

#endif