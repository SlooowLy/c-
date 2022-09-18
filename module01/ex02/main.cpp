/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:31:19 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/25 14:47:45 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "the string address : " << &string << std::endl
              << "the stringPTR addrees : " << stringPTR << std::endl
              << "stringREF address : " << &stringREF << std::endl;
    std::cout << "the string value : " << string << std::endl
              << "the stringPTR value : " << *stringPTR << std::endl
              << "stringREF value : " << stringREF << std::endl;
}