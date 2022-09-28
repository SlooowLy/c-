/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 10:53:05 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

int main()
{
	try {
		Form test("chahadat l7ayat", 1, 2);
		Bureaucrat bure("tsuki", 2);
		std::cout << test.getSigne() << std::endl;
		// bure.signForm(&test);
		test.beSigned(&bure);
		std::cout << test.getSigne() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}