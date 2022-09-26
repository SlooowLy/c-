/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:54:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 23:39:51 by aaitoual         ###   ########.fr       */
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
	std::cout << "Copy contructor called for Cat class\n";
	brain = new Brain();
	if (!brain)
		std::cout << "couldnt allocate memory for brain in Cat class\n";
	*this = copy;
}

Cat& Cat::operator = (const Cat &copy)
{
	type = copy.type;
	std::cout << "Copy assignement operator called for Cat class\n";
	std::string *tmp = new std::string[100];
	std::copy(copy.brain->get_ideas(), copy.brain->get_ideas() + 100, tmp);
	brain->set_ideas(tmp, 100);
	delete [] tmp;
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

void	Cat::set_brain(Brain *copy)
{
	std::string *tmp = new std::string[100];
	std::copy(copy->get_ideas(), copy->get_ideas() + 100, tmp);
	brain->set_ideas(tmp, 100);
	delete[] tmp;
}

Brain*	Cat::get_brain(void)
{
	return brain;
}

void	Cat::edit_brain(std::string content, int index)
{
	brain->set_ideas(content, index);
}