/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 03:57:34 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 15:07:31 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>
# include <string>
# include <array>
# include <array>
# include <type_traits>

template<typename X>
void iter(X *arr, int size, void (*function) (X)) {
	for (int i = 0; i < size; i++) {
		function (arr[i]);
	}
}

template<typename Y>
void	print(Y x) {
	std::cout << x << std::endl;
}

#endif