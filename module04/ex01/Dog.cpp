/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:28:43 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 23:40:24 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor called for Dog class!\n";
	type = "Dog";
	brain = new Brain();
	if (!brain)
		std::cout << "couldnt allocate memory for brain in Dog class\n";
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy constructor called for Dog class\n";
	brain = new Brain();
	if (!brain)
		std::cout << "couldnt allocate memory for brain in Dog class\n";
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy)
{
	type = copy.type;
	std::cout << "Copy assignement operator called for Dog class\n";
	std::string *tmp = new std::string[100];
	std::copy(copy.brain->get_ideas(), copy.brain->get_ideas() + 100, tmp);
	brain->set_ideas(tmp, 100);
	delete [] tmp;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "this is a {Dog} sound, imagine it!\n";
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog class!\n";
	delete brain;
}

void	Dog::set_brain(Brain *copy)
{
	std::string *tmp = new std::string[100];
	std::copy(copy->get_ideas(), copy->get_ideas() + 100, tmp);
	brain->set_ideas(tmp, 100);
	delete[] tmp;
}

Brain*	Dog::get_brain(void)
{
	return brain;
}

void	Dog::edit_brain(std::string content, int index)
{
	brain->set_ideas(content, index);
}