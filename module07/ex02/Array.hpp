/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:40:39 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/16 16:58:26 by aaitoual         ###   ########.fr       */
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
	T               *arr;
	unsigned int    size_;
	public :
		Array (void);
		Array (unsigned int);
		Array (const Array<T>&);
		Array<T>&  operator = (const Array<T>&);
		T operator [] (int);
		~Array (void);
		unsigned int size() const;
};

template<typename T>
unsigned int Array<T>::size() const {
	return this->size_;
}

template<typename T>
Array<T>::Array(const Array<T> &copy) {
	std::cout << "Copy costructor called for Array class\n";
	*this = copy;
}

template<typename T>
Array<T>& Array<T>::operator = (const Array<T> &copy) {
	std::cout << "Copy assignemet operator called for Array class\n";
	delete [] arr;
	arr = new T[size_];
	size_ = copy.size_;
	std::copy(copy.arr, copy.arr + copy.size_, arr);
	return *this;
}

template<typename T>
Array<T>::Array(void) {
	std::cout << "Default constructor called for Array class, beware that you didn't give this array anysize_, so it's gonna be 0\n";
	arr = new T[0];
	size_ = 0;
}

template<typename T>
Array<T>::Array(unsigned int size__) {
	std::cout << "Constructor called for Array class\n";
	arr = new T[size__];
	this->size_ = size__;
	for (unsigned int i = 0; i < size_; i++) {
		arr[0] = 0;
	}
}

template<typename T>
T   Array<T>::operator [] (int u){
	std::cout << "Operator[] called for Array class\n";
	unsigned i;
	if (u < 0)
		throw bad_memory_access();
	i = (unsigned int) u;
	if (i >= size_ || i < 0)
		throw bad_memory_access();
	return arr[i];
}
template<typename T>
Array<T>::~Array(){
	std::cout << "Destructor called for Array class\n";
	delete [] arr;
}

#endif