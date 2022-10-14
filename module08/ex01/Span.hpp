/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:43:51 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/14 13:06:58 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>

class Span {
	private :
		std::vector<int>	span;
		const unsigned int	N;
	public :
		Span();
		Span(int);
		Span(const Span &);
		Span & operator = (const Span &);
		~Span();
		void	addNumber(int);
		long	shortestSpan(void);
		long	longestSpan(void);
		class	over_writing : public std::exception {
			virtual	const char * what() const _NOEXCEPT;
		};
		class	no_span_short : public std::exception {
			virtual	const char * what() const _NOEXCEPT;
		};
		class	no_span_long : public std::exception {
			virtual	const char * what() const _NOEXCEPT;
		};
};

#endif