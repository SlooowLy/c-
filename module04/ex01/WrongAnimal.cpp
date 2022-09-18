/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:36:28 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 16:36:52 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called for WrongAnimall class!\n";
	type = "UNDEFINED";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &copy)
{
	type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for WrongAnimall class!\n";
}

void    WrongAnimal::setType(std::string type_)
{
	type = type_;
}

std::string    WrongAnimal::getType(void) const
{
	return type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This is an {WrongAnimal} sound, imagine it!\n";
}