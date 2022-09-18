/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:20:35 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/25 11:50:25 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::sett(std::string name_)
{
	name = name_;
}

std::string	Zombie::gett()
{
	return name;	
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "the Zombie " << this->name << "was killed\n";
}

void   Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
