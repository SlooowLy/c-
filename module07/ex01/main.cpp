/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 03:55:48 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 15:17:15 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n (42) {return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o;}

// template< typename T>
// void print( T const & x) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[]={0, 1, 2, 3, 4};// <--- never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print);
// 	iter( tab2, 5, print);
// 	return 0;
// }


int main() {
	// int arr[] = {1, 2, 3};
	// char arr[] = {'a', 'b', 'c'};
	double arr[] = {1.5, 2.5, 3.5};
	iter(arr, 3, print);
}