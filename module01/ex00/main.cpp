/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:55:12 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/25 12:28:31 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *zombie;
    zombie = newZombie("first zombie"); // heap
    randomChump("Se cond zombie"); // stack
    delete zombie;
    return 0;
}