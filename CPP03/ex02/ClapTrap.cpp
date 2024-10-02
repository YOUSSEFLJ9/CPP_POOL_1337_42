/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:45:36 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 18:59:29 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("default"), Hitpoints(10), Energy_points(0), Attack_damage(0)
{
    std::cout << "\033[32mClapTrap default constructor called, " << Name << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string Name) : Hitpoints(10), Energy_points(0), Attack_damage(0)
{
    std::cout << "\033[32mClapTrap constructor called, " << Name << "\033[0m" << std::endl;
    this->Name = Name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
    std::cout << "\033[32mClapTrap assignation operator called, " << ct.Name << "\033[0m" << std::endl;
    this->Name = ct.Name;
    this->Hitpoints = ct.Hitpoints;
    this->Energy_points = ct.Energy_points;
    this->Attack_damage = ct.Attack_damage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
    std::cout << "\033[32mClapTrap copy constructor called, " << ct.Name << "\033[0m"  << std::endl;
    *this = ct;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[32mClapTrap destructor called, " << Name << "\033[0m" << std::endl;
}



//Hitpoints : health

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hitpoints < 1 || this->Energy_points < 1)
    {
        std::cout << "ClapTrap " << this->Name << " is already dead !" << std::endl;
        return ;
    }
    this->Hitpoints -= amount;
    if (this->Hitpoints < 0)
        this->Hitpoints = 0;
    std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << " Health left: " << this->Hitpoints << std::endl;
    
}

void ClapTrap::attack(std::string const & target)
{
    if (this->Energy_points < 1 || this->Hitpoints < 1)
    {
        std::cout << "ClapTrap " << this->Name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    this->Energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hitpoints < 1 || this->Energy_points < 1)
    {
        std::cout << "ClapTrap " << this->Name << " is already out dead !" << std::endl;
        return ;
    }
    if (this->Hitpoints + amount > 100)
        this->Hitpoints = 100;
    else
        this->Hitpoints += amount;
    this->Energy_points--;
    std::cout << "ClapTrap " << this->Name << " be repaired by " << amount << " points!" << " Health left: " << this->Hitpoints << std::endl;
}


//geters & seters
void ClapTrap::setName(std::string Name)
{
    this->Name = Name;
}

void ClapTrap::setAttackDamage(int Attack_damage)
{
    this->Attack_damage = Attack_damage;
}

int ClapTrap::getAttackDamage()const
{
    return this->Attack_damage;
}

std::string ClapTrap::getName()const
{
    std::string Name = this->Name;
    return Name;
}

int ClapTrap::getHitpoints()const
{
    return this->Hitpoints;
}

int ClapTrap::getEnergy_points()const
{
    return this->Energy_points;
}