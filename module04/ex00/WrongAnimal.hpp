/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:11 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/16 16:35:31 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal ();
		WrongAnimal (const WrongAnimal&);
		WrongAnimal& operator = (const WrongAnimal&);
		virtual ~WrongAnimal ();
		void	setType (std::string);
		std::string	getType (void) const;
		void	makeSound(void) const;
};

#endif