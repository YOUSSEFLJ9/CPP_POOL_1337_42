/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:41:59 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/01 22:44:17 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "\033[31mScavTrap default constructor called, "<< ClapTrap::getName()<< "\033[0m"<< std::endl;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}
ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    std::cout << "\033[31mScavTrap constructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &st): ClapTrap(st)
{
    std::cout << "\033[31mScavTrap copy constructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
    std::cout << "\033[31mScavTrap assignation operator called, " << st.getName() << "\033[0m" << std::endl;
    
    ClapTrap::operator =(st); 
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std ::cout <<"\033[31mScavTrap destructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
}



void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << ", is now in Gatekeeper mode!\n";
}

void ScavTrap::attack(const std::string &target)
{
   if (this->energy_points < 1 || this->hitpoints < 1)
    {
        std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points -= 1; 
}