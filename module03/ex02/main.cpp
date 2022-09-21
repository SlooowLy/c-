/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:39:04 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/19 14:19:51 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	test1("test1"), test2("test2");

	std::cout << "player 1 hit points " << test1.get_stats(1) << std::endl;
	std::cout << "player 1 energy " << test1.get_stats(2) << std::endl;
	std::cout << "player 1 attack dmg " << test1.get_stats(3) << std::endl;
	std::cout << "player 2 hit points " << test2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << test2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << test2.get_stats(3) << std::endl;
	test1.attack("player 2");
	test2.takeDamage(test1.get_stats(3));
	std::cout << "player 1 hit points " << test1.get_stats(1) << std::endl;
	std::cout << "player 1 energy " << test1.get_stats(2) << std::endl;
	std::cout << "player 1 attack dmg " << test1.get_stats(3) << std::endl;
	std::cout << "player 2 hit points " << test2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << test2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << test2.get_stats(3) << std::endl;
	test2.beRepaired(3);
	std::cout << "player 2 hit points " << test2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << test2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << test2.get_stats(3) << std::endl;
	test1.highFivesGuys();
}