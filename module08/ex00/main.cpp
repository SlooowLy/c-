/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:14:25 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/17 18:52:11 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main() {
	try {
		std::vector<int>			test;
		std::vector<int>::iterator	it;
		for (int i = 0; i != 99; i++)
			test.push_back('1');
		test.push_back('1');
		easyfind(test, '0');
		std::cout << "easyfind found the element that your are looking!\n";
	}
	catch (int e) {
		(void)e;
		std::cout << "easyfind couldnt find the element that you are looking for!\n";
	}
	return 0;
}