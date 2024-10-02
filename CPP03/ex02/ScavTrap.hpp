/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:47:11 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 18:24:56 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

//derived class from ClapTrap base class
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &st);
        ScavTrap &operator=(const ScavTrap &st);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string &target);

};