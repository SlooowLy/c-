/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:38 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 21:43:14 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>
# include <vector>

template<typename T, class C = std::deque<T> >
class   MutantStack : public std::stack<T, C>{
	public :
		typedef typename std::stack<T, C>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
		MutantStack () {
			std::cout << "Default constructor called for MutantStack class\n";
		}
		MutantStack (const MutantStack &copy) {
			std::cout << "Copy constructor called for MutantStack class"; this->c = copy->c;
		}
		MutantStack& operator = (const MutantStack &copy) {
			std::cout << "Copy assignement operator called for MutantStack class\n";
			this->c = copy->c;
			return *this;
		}
};

#endif