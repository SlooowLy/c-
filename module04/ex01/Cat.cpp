/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:54:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 19:07:18 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor called for Cat class!\n";
	type = "Cat";
	brain = new Brain();
	if (!brain)
		std::cout << "couldnt allocate memory for brain in Cat class\n";
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
	delete brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "This is a {Cat} sound, imagine it!\n";
}
