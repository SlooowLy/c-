/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:11 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 14:53:55 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    //[...]
    mstack.push(0);
    std::cout << *mstack.begin() << std::endl;
    std::cout << *mstack.end() << std::endl;
    MutantStack<int>::iterator it;
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    // std::stack<int> s(mstack);
    


    // std::vector<int> test;
    // test.push_back (1);
    // test.push_back (2);
    // test.push_back (3);
    // std::vector<int>::iterator it = test.begin();
    // std::cout << it.base() << std::endl;
    // std::cout << &test[0] << std::endl;
    // std::cout << *it << std::endl;
    return 0;
}