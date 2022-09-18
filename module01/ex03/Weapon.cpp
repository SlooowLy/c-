/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:20:14 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/29 00:31:23 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::~Weapon()
{
}

std::string	Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string type_)
{
	type = type_;
}

Weapon::Weapon(std::string type_)
{
	type = type_;
}
