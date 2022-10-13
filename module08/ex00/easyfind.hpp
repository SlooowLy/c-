/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:58:23 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/12 19:34:35 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <vector>

template <typename T>
int	easyfind(T arr, int sec) {
	int size = distance(arr.begin(), arr.end());
	T	iter;
	// std::cout << size << std::endl;
	
	// typename iter
	// iter ptr;
	for (int i = 0; i != size; i++) {
		if (arr[i] == sec)
			return i;
	}
	return -1;
}

#endif