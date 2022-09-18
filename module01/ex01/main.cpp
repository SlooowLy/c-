/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:55:12 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/25 13:30:20 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    Zombie *zombie;
    int N = 10;
    zombie = zombieHorde(N, "steve"); // heap
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
        std::cout << i + 1 << std::endl;
    }
    delete[] zombie;
    return 0;
}