/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:33:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/21 14:26:01 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called for Animall class!\n";
	type = "UNDEFINED";
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal& Animal::operator = (const Animal &copy)
{
	type = copy.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animall class!\n";
}

void    Animal::setType(std::string type_)
{
	type = type_;
}

std::string    Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal dont have a sound\n";
}