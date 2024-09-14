/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:38:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/10 12:41:08 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

  Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie();
    zombie->setName(name);
    return (zombie);
}