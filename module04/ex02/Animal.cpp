/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:33:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 23:36:22 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called for Animall class!\n";
	brain = new Brain;
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
	delete brain;
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
	std::cout << "This is an {Animal} sound, imagine it!\n";
}

void	Animal::edit_brain(std::string copy, int index)
{
	(void) copy;
	index++;
}

Brain	*Animal::get_brain()
{
	return brain;
}

void	Animal::set_brain(Brain *copy)
{
	(void)copy;
}