/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:24:52 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/02 20:00:25 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

// template <typename T>
// int easyfind(T t, int i)
// {
//     int *it = std::find(t.begin(), t.end(), i);
//     if (it != std::end(t))
//         return *it;
//     else
//         throw std::invalid_argument("not found !");
// }

template <typename T>
int easyfind(T t, int i)
{
    typename T::iterator  it = std::find(std::be, t.end(), i);
    if (it != std::end(t))
        return *it;
    else
        throw std::invalid_argument("not found !");
}


#endif // EASYFIND_HPP