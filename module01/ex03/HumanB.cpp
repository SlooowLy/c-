/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:16:50 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/29 00:19:10 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon_)
{
    weapon = &weapon_;
}

HumanB::HumanB(std::string name_)
{
    name = name_;
}

void    HumanB::attack()
{
    std::cout << name << "  attacks with their  " << weapon->getType () << std::endl;
}