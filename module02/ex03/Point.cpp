/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 05:42:46 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 15:54:59 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	Point::get(int i) const
{
	if (i == 1)
		return (x.toFloat());
	else if (i == 2)
		return (y.toFloat());
	return 0;
}

Point::Point()
{
	std::cout << "Default constructor called\n";
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y)
{
	std::cout << "Copy constractor called\n";
}

Point& Point::operator= (const Point& copy)
{
	std::cout << "copy assignment operator called\n";
	(void) copy;
	return *this;
}


Point::~Point()
{
	std::cout << "Destructor called\n";
}

Point::Point(const float _x, const float _y) : x(Fixed(_x)), y(Fixed(_y)){}
