/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:59:50 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/28 18:21:38 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template <typename x>
void swap(x &a, x &b)
{
    x tmp = a;
    a = b;
    b = tmp;
}

template <typename x>  
x min(x &a, x &b)
{
    return a < b ? a : b;
}

template <typename x>
x max(x &a, x &b)
{
    return a > b ? a : b;
}



#endif