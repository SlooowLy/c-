/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:57:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/15 13:03:16 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "default constructor called for DiamondTrap class\n";
}

DiamondTrap::DiamondTrap(std::string name_) : ClapTrap(name_ + "_clap_name"), ScavTrap(name_ + "_clap_name"), FragTrap(name_ + "_clap_name")
{
	std::cout << "default constructor called for DiamondTrap class\n";
	name = name_;
	Attack_damage = 30;
	Hit_Points = 100;
	Energy_Points = 50;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hey, my name is : " << name << " and my Claptrap name is : " << ClapTrap::name << " !\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor called for DiamondTrap class\n";
}