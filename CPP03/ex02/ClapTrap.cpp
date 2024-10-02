/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:45:36 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/01 22:54:37 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitpoints(10), energy_points(0), attack_damage(0)
{
    std::cout << "\033[32mClapTrap default constructor called, " << name << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitpoints(10), energy_points(0), attack_damage(0)
{
    std::cout << "\033[32mClapTrap constructor called, " << name << "\033[0m" << std::endl;
    this->name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
    std::cout << "\033[32mClapTrap assignation operator called, " << ct.name << "\033[0m" << std::endl;
    this->name = ct.name;
    this->hitpoints = ct.hitpoints;
    this->energy_points = ct.energy_points;
    this->attack_damage = ct.attack_damage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
    std::cout << "\033[32mClapTrap copy constructor called, " << ct.name << "\033[0m"  << std::endl;
    *this = ct;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[32mClapTrap destructor called, " << name << "\033[0m" << std::endl;
}



//hitpoints : health

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints < 1 || this->energy_points < 1)
    {
        std::cout << "ClapTrap " << this->name << " is already dead !" << std::endl;
        return ;
    }
    this->hitpoints -= amount;
    if (this->hitpoints < 0)
        this->hitpoints = 0;
    std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << " Health left: " << this->hitpoints << std::endl;
    
}

void ClapTrap::attack(std::string const & target)
{
    if (this->energy_points < 1 || this->hitpoints < 1)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints < 1 || this->energy_points < 1)
    {
        std::cout << "ClapTrap " << this->name << " is already out dead !" << std::endl;
        return ;
    }
    if (this->hitpoints + amount > 100)
        this->hitpoints = 100;
    else
        this->hitpoints += amount;
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " be repaired by " << amount << " points!" << " Health left: " << this->hitpoints << std::endl;
}


//geters & seters
void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
    this->attack_damage = attack_damage;
}

int ClapTrap::getAttackDamage()const
{
    return this->attack_damage;
}

std::string ClapTrap::getName()const
{
    std::string name = this->name;
    return name;
}

int ClapTrap::getHitpoints()const
{
    return this->hitpoints;
}

int ClapTrap::getEnergy_points()const
{
    return this->energy_points;
}