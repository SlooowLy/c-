/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:58:49 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/14 15:49:48 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called for ClapTrap class\n";
}

std::string ClapTrap::get_name() const
{
	return name;
}

int  ClapTrap::get_stats(int i) const
{
	switch (i)
	{
	case 1:
		return Hit_Points;
	case 2:
		return Energy_Points;
	case 3:
		return Attack_damage;
	default:
		break;
	}
	return 0;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!Energy_Points || Hit_Points < 1)
		std::cout << "ClapTrap " << name << " exhausted he cant attack!\n";
	else {
		Energy_Points--;
		std::cout << "ClapTrap " << name << " attack " << target
				  << ", causing " << Attack_damage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_Points < 1)
		std::cout << "ClapTrap " << name << " already exhausted, he can't fight anymore!\n";
	else {
		Hit_Points -= amount;
		std::cout << "ClapTrap " << name << " took " << amount << " points of damage!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!Energy_Points)
		std::cout << "ClapTrap " << name << " exhausted, he can't even repaire!\n";
	else {
		Energy_Points--;
		Hit_Points += amount;
		std::cout << "ClapTrap " << name << " got " << amount << " hit points!\n";
	}
}

ClapTrap::ClapTrap(std::string name_)
{
	std::cout << "Default constructor called for ClapTrap class\n";
	Hit_Points = 10;
	Energy_Points = 10;
	Attack_damage = 0;
	name = name_;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constractor called for ClapTrap class\n";
	*this = copy;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &old)
{
	std::cout << "Copy assignment operator called TrapClap class \n";
	name = old.get_name();
	Hit_Points = old.get_stats(1);
	Energy_Points = old.get_stats(2);
	Attack_damage = old.get_stats(3);
	return *this;
}

void	ClapTrap::set_stats(int i, int amount)
{
	switch (i)
	{
	case 1:
		Hit_Points = amount;
		break;
	case 2:
		Energy_Points = amount;
		break;
	case 3:
		Attack_damage = amount;
		break;

	default:
		break;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap class\n";
}