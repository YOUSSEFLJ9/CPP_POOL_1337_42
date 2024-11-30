/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:43:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/30 17:16:53 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T arr[], size_t size, void (*func)(T & elem))
{
    for (size_t i = 0; i < size; i++)
        func(arr[i]);
}
template <typename T>
void iter(T arr[], size_t size, void (*func)(const T & elem))
{
    for (size_t i = 0; i < size; i++)
        func(arr[i]);
}

template <typename T>
void print(T &elem)
{
    std::cout << elem << std::endl;
}

#endif // ITER_HPP