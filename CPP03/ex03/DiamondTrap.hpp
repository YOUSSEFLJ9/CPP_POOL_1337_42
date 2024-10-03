/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:13:27 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/03 17:27:42 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string Name);
        DiamondTrap(const DiamondTrap &dt);
        DiamondTrap &operator=(const DiamondTrap &dt);
        ~DiamondTrap();
        void attack(const std::string &target);
    //specil function of DiamondTrap:
        void whoAmI();
    //Geter and Seter
        void setName(const std::string Name);
        const std::string getName()const;
        
             
};