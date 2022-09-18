/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:17:30 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/29 00:19:05 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA (std::string name_, Weapon &weapon_)
{
    name = name_;
    weapon = &weapon_;
}
void    HumanA::attack()
{
    std::cout << name << "  attacks with their  " << weapon->getType () << std::endl;
}