/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:26:01 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/25 22:28:20 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t> (ptr);	
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*> (raw);
}

int main() {
	Data		*test = new Data;
	Data		*test2;
	uintptr_t	raw;

	test->i = 10;
	std::cout << test->i << std::endl;
	raw = serialize(test);
	test2 = deserialize(raw);
}