/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:39:35 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/01 22:43:25 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hitpoints;
        int energy_points;
        int attack_damage;

    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &CT);
    ClapTrap &operator=(const ClapTrap &CT);
    ~ClapTrap();
    
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string name);
    std::string getName()const;
    void setAttackDamage(int attack_damage);
    int getAttackDamage()const;
    int getHitpoints()const;
    int getEnergy_points()const;
    
};