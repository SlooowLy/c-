/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:21:44 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/13 16:20:10 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float   get_dist(Point const a, Point const b)
{
	return sqrt((double)(b.get(1) - a.get(1)) * (b.get(1) - a.get(1)) + (b.get(2) - a.get(2)) * (b.get(2) - a.get(2)));
}

float   get_area(Point const a, Point const b, Point const c)
{
	float   A = get_dist(a, b);
	float   B = get_dist(c, b);
	float   C = get_dist(c, a);
	float   s = (A+B+C) / 2;
	
	return sqrt( s * (s-A) * (s-B) * (s-C));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ori_area(get_area (a, b, c));
	Fixed	area_1(get_area (point, a, b));	
	Fixed	area_2(get_area (point, a, c));	
	Fixed	area_3(get_area (point, c, b));

	if (!area_1.toFloat() || !area_2.toFloat() || !area_3.toFloat())
		return false;
	if (ori_area == (area_1 + area_2 + area_3))
		return true;
	return false;
}