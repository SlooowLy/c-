/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:40:39 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 12:18:41 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <array>
# include <string>
# include <exception>

class   bad_memory_access : public std::exception {
    virtual const char * what () const _NOEXCEPT {
        return "You are trying to access a non allocated memory\n";
    };
};

template<typename T>
class Array {
	T *arr;
    int size;
    public :
		Array (void);
		Array (unsigned int);
        T operator [] (int);
        ~Array (void);
};

template<typename T>
Array<T>::Array(void) {
    std::cout << "Constructor called for Array class\n";
    arr = new T[1];
}

template<typename T>
Array<T>::Array(unsigned int size_) {
    std::cout << "Constructor called for Array class\n";
    arr = new T[size_];
    this->size = size_;
    memset(arr, 0, size);
}

template<typename T>
T   Array<T>::operator [] (int i){
    std::cout << "Operator[] called for Array class\n";
    if (i >= size || i < 0)
        throw bad_memory_access();
    return arr[i];
}
template<typename T>
Array<T>::~Array(){
    std::cout << "Destructor called for Array class\n";
    delete [] arr;
}

#endif