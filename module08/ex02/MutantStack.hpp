/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:38 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/14 17:55:27 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>
# include <vector>

template<typename T>
class   MutantStack : public std::stack<T, std::deque<int> > {
	public :
		c::iterator begin() {return c->begin()};
};

#endif