/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:40:18 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 17:04:02 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

// class base {
//     public :
//         int i;
//         base& operator = (int j) {i = j + 1; return *this;}
// };

int main() {

	Array<int> test;
	try {
		std::cout << test[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	// Array<int> test(10);
	// try {
	// 	std::cout << test.size() << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what();
	// }
	// try {
	//     Array<int> test;
	//     std::cout << test[0] << std::endl;
	// }
	// catch (std::exception &e) {
	//     std::cout << e.what();
	// }
	// Array<int> test(10);

	// try {
	//     std::cout << test[9] << std::endl;
	// }
	// catch (std::exception &e) {
	//     std::cout << e.what();
	// }
	// Array<int> test(10);

	// try {
	//     std::cout << test[10] << std::endl;
	// }
	// catch (std::exception &e) {
	//     std::cout << e.what();
	// }
}