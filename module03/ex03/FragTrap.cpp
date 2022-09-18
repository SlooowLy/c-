/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:21:09 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/15 11:42:13 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called for FragTrap class\n";
	name = "undefined";
	Energy_Points = 0;
	Hit_Points = 0;
	Attack_damage = 0;
}

FragTrap::FragTrap(std::string name_)
{
	std::cout << "Default constructor called for FragTrap class\n";
	name = name_;
	Energy_Points = 100;
	Hit_Points = 100;
	Attack_damage = 30;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "hey, can i get a high five?\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor was called for FragTrap class\n";
}