/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:55:04 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 02:11:37 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

// class Awesome;

template <typename T>
void    swap(T &x, T &y) {
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T x, T y) {
    if (x < y)
        return x;
    return y;
}

template <typename T>
T max(T x, T y) {
    if (x > y)
        return x;
    return y;
}

# endif
