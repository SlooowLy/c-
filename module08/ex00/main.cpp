/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:14:25 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/13 10:33:56 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main() {
    std::vector<int> test;
    int resault;
    for (int i = 0; i != 99; i++) {
        test.push_back('1');
    }
    test.push_back('0');
    resault = easyfind(test, '0');
    if (resault == -1) {
        std::cout << "easyfind couldnt find the element that you are looking for\n";
        return 0;
    }
    else
        std::cout << "easyfind found that the element that your are looking for is : " << test[resault] << " in the index : " << resault << "!\n";
    return 0;
}