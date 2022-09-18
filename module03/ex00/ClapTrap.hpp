/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:49:08 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/14 11:46:28 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	std::string	name;
	int	Hit_Points;
	int	Energy_Points;
	int	Attack_damage;
	
	public :
		ClapTrap(std::string);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator = (const ClapTrap&);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name() const;
		int get_stats(int) const;
		void	set_stats (int, int);
};

#endif