/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:02:42 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/12 21:25:53 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()const
{
    return type; 
}

void Weapon::setType(std::string newType)
{
    type = newType;
}

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon()
{
}
