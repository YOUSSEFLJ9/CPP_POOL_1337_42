/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:38:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/17 17:22:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

  Zombie* newZombie( std::string name )
{
    Zombie *zombie = new(std::nothrow) Zombie();
    if (!zombie)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        return (NULL);
    }
    zombie->setName(name);
    return (zombie);
}