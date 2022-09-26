/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:54:00 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/23 17:51:55 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	Brain *brain;
	public :
		Cat();
		Cat(const Cat&);
		Cat& operator = (const Cat&);
		~Cat();
        void makeSound(void) const;
		void	set_brain(Brain*);
		Brain*	get_brain(void);
		void	edit_brain(std::string, int); // the string you want to add and the index;
};

#endif