/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:28:43 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 15:05:34 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor called for Dog class!\n";
	type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy)
{
	type = copy.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "this is a {Dog} sound, imagine it!\n";
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog class!\n";
}
