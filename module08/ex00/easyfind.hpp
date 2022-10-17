/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:58:23 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/17 18:45:52 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <stack>
# include <exception>

template <typename T>
typename T::iterator	easyfind(T arr, int sec) {
	typename T::iterator result;
	result = std::find (arr.begin(), arr.end(), sec);
	if (result != arr.end())
		return result;
	throw 0;
}

#endif