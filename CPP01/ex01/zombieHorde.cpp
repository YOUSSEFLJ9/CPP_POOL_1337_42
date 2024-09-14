/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:25:31 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/12 21:06:42 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    Zombie* horde = new(std::nothrow) Zombie[N];
    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}
