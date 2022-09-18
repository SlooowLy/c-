/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:28:55 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/28 17:08:23 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "harl.hpp"
# include <iostream>
# include "harl.hpp"
# include <vector>

int	main(int ac, char **av)
{
	harl	test;
	
	if (ac == 2)
		test.complain(av[1]);
	else
		std::cout << "invalid arguments \n";
	return 0;
}