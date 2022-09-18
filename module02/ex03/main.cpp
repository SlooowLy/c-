/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:45:46 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/13 16:19:50 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    
    Point a(0, 0);
    Point b(3, 3);
    Point c(3, -3);
    Point point(1, 0);
    
    std::cout << bsp(a, b, c, point) << "------------" << std::endl;
    return 0;
}