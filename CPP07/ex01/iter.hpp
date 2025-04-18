/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:43:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/02 20:14:38 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T arr[], size_t size, void (*func)(T elem))
{
    if (!arr || !func)
        throw std::invalid_argument("Null pointer exception");
    for (size_t i = 0; i < size; i++)
        func(arr[i]);
}

template <typename T>
void print(T elem)
{
    std::cout << elem << std::endl;
}

#endif // ITER_HPP