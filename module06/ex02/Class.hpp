/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:48:08 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 00:49:05 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include <array>
# include <exception>

class Base {
    public :
        virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif
