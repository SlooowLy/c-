/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:33:36 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/23 17:36:56 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain {
	std::string *ideas;
	public :
		Brain();
		Brain(const Brain&);
		Brain& operator = (const Brain&);
		~Brain();
		std::string	*get_ideas(void);
		void		set_ideas(std::string *, int); // the content and the size of the array
		void		set_ideas(std::string, int);
};

#endif