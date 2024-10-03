/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:13:12 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/03 17:42:01 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "\033[34mDiamondTrap default constructor called, "<< this->Name<< "\033[0m"<< std::endl;
    this->Name = "Defaut_clap_name";
    this->Hitpoints = 100; // FragTrap
    this->Energy_points = 50; //ScavTrap
    this->Attack_damage = 30; //FragTrap
}
DiamondTrap::DiamondTrap(const std::string Name): ClapTrap(Name + "_clap_name"),ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name"),Name(Name)
{
    
    std::cout << "\033[34mDiamondTrap constructor called, " << this->Name<< "\033[0m"<< std::endl;
    this->Hitpoints = 100;    // FragTrap
    this->Energy_points = 50; //ScavTrap
    this->Attack_damage = 30; // FragTrap
}
DiamondTrap::DiamondTrap(const DiamondTrap& dt)
{
    std::cout << "\033[34mDiamondTrap copy constructor called, " << dt.Name<< "\033[0m"<< std::endl;
    *this = dt;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt)
{
    std::cout << "\033[34mDiamondTrap assignation operator called, " << dt.getName() << "\033[0m" << std::endl;
    if (this != &dt)
    {
        ClapTrap::operator=(dt);   
        this->Name = ClapTrap::Name;
    }
    return (*this); 
}
DiamondTrap::~DiamondTrap()
{
    std ::cout <<"\033[34mDiamondTrap destructor called, " << this->Name<< "\033[0m"<< std::endl;
}


void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->Name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}


void DiamondTrap::setName(const std::string Name)
{
    this->Name = Name;
}
const std::string DiamondTrap::getName()const
{
    return this->Name;
}