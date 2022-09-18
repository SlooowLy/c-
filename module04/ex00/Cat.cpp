/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:54:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 15:05:27 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor called for Cat class!\n";
	type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat& Cat::operator = (const Cat &copy)
{
	type = copy.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat class!\n";
}

void    Cat::makeSound(void) const
{
    std::cout << "This is a {Cat} sound, imagine it!\n";
}
