/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:31:19 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/14 14:52:10 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string string2 = "oy";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "the string address : " << &string << std::endl
              << "the stringPTR addrees : " << stringPTR << std::endl
              << "stringREF address : " << &stringREF << std::endl;
    stringPTR = &string2;
    std::cout << "the string value : " << string << std::endl
              << "the stringPTR value : " << *stringPTR << std::endl
              << "stringREF value : " << stringREF << std::endl;
}