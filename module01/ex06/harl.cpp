/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:39:31 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/29 00:40:41 by aaitoual         ###   ########.fr       */
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
	switch (i)
	{
	case 0:
		std::cout << "[" << calls[0] << "] :" << std::endl;
	    (X.*functions[0])();
	case 1:
		std::cout << "[" << calls[1] << "] :" << std::endl;
	    (X.*functions[1])();
	case 2:
		std::cout << "[" << calls[2] << "] :" << std::endl;
	    (X.*functions[2])();
	case 3:
		std::cout << "[" << calls[3] << "] :" << std::endl;
	    (X.*functions[3])();
	default:
		std::cout << "nice try but its a bad level\n";
		break ;
	}
}