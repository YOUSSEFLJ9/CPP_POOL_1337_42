/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:41:30 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/30 14:44:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP   

#include <iostream>

template <typename T>
class Array
{
    private:
        T *_element;
        std::size_t _size;
    public:
        Array();
        Array(const Array&);
        Array(const unsigned int &);
        Array &operator=(const Array&);
        ~Array();
        
        T &operator[](const std::size_t &idx);
        const T &operator[](const std::size_t &idx)const;
        const std::size_t &size()const;  
};

template <typename T>
Array<T>::Array(): _element(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(const Array &arr)
{
    this->_element = NULL;
    *this = arr;
}

template <typename T>
Array<T>::Array(const unsigned int &n)
{
    _element = new T[n];
    _size = n;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &arr)
{
    if (this == &arr)
        return *this;
    if (_element)
        delete [] _element;
    _element = new T[arr._size];
    _size = arr._size;
    for (std::size_t i = 0; i < _size; i++)
        _element[i] = arr._element[i];

    return *this;
}

template <typename T>
Array<T>::~Array()
{
    if (_element)
        delete [] _element;
}


template <typename T>
T &Array<T>::operator[](const std::size_t &idx)
{
    if (idx >= _size)
        throw std::out_of_range("Index out of range");
    return _element[idx];
}

template <typename T>
const T &Array<T>::operator[](const std::size_t &idx)const
{
    if (idx >= _size)
        throw std::out_of_range("Index out of range");
    return _element[idx];
}

template <typename T>
const std::size_t &Array<T>::size()const
{
    return _size;
}

#endif 