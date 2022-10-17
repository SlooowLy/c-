/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:11 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/17 19:00:06 by aaitoual         ###   ########.fr       */
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
    std::cout << "******************************\n";
    std::cout << *mstack.begin() << std::endl;
    std::cout << *mstack.end() << std::endl;
    std::cout << "******************************\n";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    mstack.pop();
    std::cout << s.top() << std::endl;
    std::cout << mstack.top() << std::endl;
    return 0;
}