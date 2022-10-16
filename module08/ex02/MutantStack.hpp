/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:38 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 14:53:42 by aaitoual         ###   ########.fr       */
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
class   MutantStack : public std::stack<T> {
	typedef typename std::stack<T>::container_type::iterator iterator;
	public :
		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
};

#endif