/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 19:57:41 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

int main()
{
	try {
		Form test("chahadat l7ayat", 150, 0);
		std::cout << test;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}