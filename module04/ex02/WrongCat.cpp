/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:38:23 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 16:38:42 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor called for WrongCat class!\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat &copy)
{
	type = copy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for WrongCat class!\n";
}

void    WrongCat::makeSound(void) const
{
    std::cout << "This is a {WrongCat} sound, imagine it!\n";
}
