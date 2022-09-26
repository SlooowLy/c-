/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:51:14 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/23 17:58:53 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor callled for Brain class\n";
    ideas = new std::string[100];
    if (!ideas)
        std::cout << "Couldnt allocate memory for ideas in brain class\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "copy constructor called for Brain class\n";
    ideas = new std::string[100];
    if (!ideas)
        std::cout << "Couldnt allocate memory for ideas in brain class\n";
    else
        std::copy(copy.ideas, copy.ideas + 100, ideas);
}

Brain& Brain::operator = (const Brain& copy)
{
    std::cout << "Copy assinement operator called for Brain Class\n";
    std::copy(copy.ideas, copy.ideas + 100, ideas);
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor callled for Brain class\n";
    delete[] ideas;
}

//getter && setter **************************************************

std::string*	Brain::get_ideas(void)
{
	return ideas;
}

void    Brain::set_ideas(std::string* copy, int size)
{
    if (size < 1 || size > 100)
        std::cout << "couldn't copy the array because the size is invalide, it should be between 1 and 100\n";
    else
        std::copy(copy, copy + size, ideas);
}

void    Brain::set_ideas(std::string ideas_, int i)
{
    if (i > -1 && i < 100) {
        ideas[i] = ideas_;
    }
}