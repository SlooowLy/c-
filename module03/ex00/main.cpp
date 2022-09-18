/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:39:04 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/15 14:01:32 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap player1("player 1"), player2("player 2");

	player1.set_stats(3, 3);
	std::cout << "player 1 hit points " << player1.get_stats(1) << std::endl;
	std::cout << "player 1 energy " << player1.get_stats(2) << std::endl;
	std::cout << "player 1 attack dmg " << player1.get_stats(3) << std::endl;
	std::cout << "player 2 hit points " << player2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << player2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << player2.get_stats(3) << std::endl;
	player1.attack("player 2");
	player2.takeDamage(player1.get_stats(3));
	std::cout << "player 1 hit points " << player1.get_stats(1) << std::endl;
	std::cout << "player 1 energy " << player1.get_stats(2) << std::endl;
	std::cout << "player 1 attack dmg " << player1.get_stats(3) << std::endl;
	std::cout << "player 2 hit points " << player2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << player2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << player2.get_stats(3) << std::endl;
	player2.beRepaired(3);
	std::cout << "player 2 hit points " << player2.get_stats(1) << std::endl;
	std::cout << "player 2 energy " << player2.get_stats(2) << std::endl;
	std::cout << "player 2 attack dmg " << player2.get_stats(3) << std::endl;
}