/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:28:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 16:39:31 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected :
		std::string type;
	public :
		Animal ();
		Animal (const Animal&);
		Animal& operator = (const Animal&);
		virtual ~Animal ();
		void	setType (std::string);
		std::string	getType (void) const;
		virtual void	makeSound(void) const;
};

#endif