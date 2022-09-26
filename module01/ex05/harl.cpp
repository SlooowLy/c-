/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:39:31 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/21 18:42:49 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harl.hpp"

void	harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";	
}

void	harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			  << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	harl::warning(void)
{
	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for"
			  << "years whereas you started working here since last month.\n";
}

void	harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	harl::complain(std::string level)
{
	harl	X;
    int     i;

    i = 0;
	std::array<std::string, 4> calls = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (harl::*functions[4])(void) = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	
	while (calls[i][0] && calls[i] != level)
        i++;
    if (i != 4)
    {
        std::cout << "[" << calls[i] << "] :" << std::endl;
	    (X.*functions[i])();
    }
    else
        std::cout << "nice try but its a bad level\n";
}