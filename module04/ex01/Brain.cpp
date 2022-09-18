/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:51:14 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 19:09:50 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor callled for Brain class\n";
    ideas = new std::string[10];
    if (!ideas)
        std::cout << "Couldnt allocate memory for ideas in brain class\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "copy constructor called for Brain class\n";
    *this = copy;
}

Brain& Brain::operator = (const Brain& copy)
{
    std::cout << "Copy assinement operator called for Brain Class\n";
    ideas = copy.ideas;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor callled for Brain class\n";
    delete[] ideas;
}
