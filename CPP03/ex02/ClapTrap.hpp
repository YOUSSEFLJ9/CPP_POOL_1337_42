/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:39:35 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 18:57:12 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;

    public:
    ClapTrap();
    ClapTrap(const std::string Name);
    ClapTrap(const ClapTrap &ct);
    ClapTrap &operator=(const ClapTrap &ct);
    ~ClapTrap();
    
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string Name);
    std::string getName()const;
    void setAttackDamage(int attack_damage);
    int getAttackDamage()const;
    int getHitpoints()const;
    int getEnergy_points()const;
    
};