/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:07:37 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 19:23:57 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "\033[31mFragTrap default constructor called, "<< ClapTrap::getName()<< "\033[0m"<< std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}
FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
    std::cout << "\033[31mFragTrap constructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &ft): ClapTrap(ft)
{
    std::cout << "\033[31mFragTrap copy constructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &ft)
{
    std::cout << "\033[31mFragTrap assignation operator called, " << ft.getName() << "\033[0m" << std::endl;
    
    ClapTrap::operator =(ft); 
    return (*this);
}
FragTrap::~FragTrap()
{
    std ::cout <<"\033[31mFragTrap destructor called, " << ClapTrap::getName()<< "\033[0m"<< std::endl;
}
// special function:
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << ", wants a positive high five! 🙌"<< std::endl;
}