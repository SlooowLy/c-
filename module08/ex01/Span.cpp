/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:02:17 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:01 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

//CANONICAL FORM*************************************************************************************

Span::Span() : N(0) {
	std::cout << "Default constructor called for Span class, beware that you didn't give the max value for the Span, than it will be 0\n";
}

Span::Span(int N_) : N(N_) {
	std::cout << "Constructor called for Span class\n";
}

Span::Span(const Span &copy) {
	std::cout << "Copy constructor called for Span class\n";
	*this = copy;
}

Span & Span::operator= (const Span &copy) {
	std::cout << "Copy assignement operator called for Span class\n";
	N = copy.N;
	for (size_t i = 0; i != copy.span.size(); i++) {
		span.push_back(copy.span[i]);
	}
	return *this;
}

Span::~Span() {
	std::cout << "Destructor called for Span class\n";
}

//OTHER METHODS*************************************************************************************

void	Span::addNumber(int number) {
	if (span.size() < N)
		span.push_back(number);
	else
		throw over_writing();
}


long	Span::longestSpan(void) {

	int min, max;
	if (span.size() > 1) {
		min = span[0];
		max = span[0];
		for (size_t u = 0; u != span.size(); u++) {
			if (span[u] < min)
				min = span[u];
			if (span[u] > max)
				max = span[u];
		}
	}
	else
		throw no_span_long();
	return max - min;
}

long	Span::shortestSpan(void) {
	long ret = -1;
	std::vector<long>	resaults;
	
	std::sort(span.begin(), span.end());
	if (span.size() > 1) {
		for (size_t i = 0; i != span.size(); i++) {
			if (i + 1 != span.size())
				resaults.push_back(span[i + 1] - span[i]);
		}
		for (size_t i = 0; i != resaults.size(); i++) {
			if (ret > resaults[i] || (ret < 0 && resaults[i] >= 0))
				ret = resaults[i];
		}
	}
	else
		throw no_span_short();
	return ret;
}

//EXCEPTIONS

const char * Span::no_span_short::what() const _NOEXCEPT {
	return "No valid span could be found to give you the shortest span\n";
}
const char * Span::no_span_long::what() const _NOEXCEPT {
	return "No valid span could be found to give you the longest span\n";
}

const char * Span::over_writing::what() const _NOEXCEPT {
	return "You can't add more elements in this span\n";
}