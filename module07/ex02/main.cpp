/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:40:18 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 12:12:22 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main() {
    Array<int> test(10);

    try {
        std::cout << test[10] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
}