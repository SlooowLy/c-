/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 14:53:28 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Tsuki", 150);
		a.grade_increment();
		std::cout << a.getGrade() << std::endl;
		std::cout << a.getName() << std::endl;
		std::cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}