/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:55:38 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/14 17:05:10 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "default constructor called for ScavTrap class\n";
    name = "undefined";
    Hit_Points = 0;
    Energy_Points = 0;
    Attack_damage = 0;
}

ScavTrap::ScavTrap(std::string name_)
{
    std::cout << "default constructor called for ScavTrap class\n";
    name = name_;
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_damage = 20;
}

void    ScavTrap::attack(std::string target)
{
	if (!Energy_Points || Hit_Points < 1)
		std::cout << "ScavTrap " << name << " exhausted he can't attack!\n";
	else {
		Energy_Points--;
		std::cout << "ScavTrap " << name << " attack " << target
				  << ", causing " << Attack_damage << " points of damage!\n";
	}
}

void	ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode!\n";
}


ScavTrap::~ScavTrap()
{
    std::cout << "destructor called for ScavTrap class\n";
}