/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:11:18 by aaitoual          #+#    #+#             */
/*   Updated: 2023/04/21 20:16:09 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	(void) ac;
	if (ac != 2) {
		std::cout << "ARG ERROR!!\n";
		return 1;
	}
	Calculator test(av[1]);
	std::string tmp;
	for (std::multimap<int, Info>::iterator it = test.get_file().begin();
			it != test.get_file().end(); it++) {
		if (!(*it).second.get_status()) {
			std::cout << (*it).second.get_line().substr(0, (*it).second.get_line().find(" ")) << " => " << (*it).second.get_val() << " = " << (*it).second.get_val() * (*test.get_db().lower_bound((*it).first)).second << std::endl;
		}
		else {
			tmp = (*it).second.get_error();
			std::cout << tmp;
		}
	}
}