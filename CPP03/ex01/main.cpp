/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:25:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 15:18:02 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

    ScavTrap lion("RB_Lion");
    ScavTrap monster(lion);
    monster.setName("Monster");
    ScavTrap centaur;
    centaur = monster;
    centaur.setName("Centaur");

    std:: cout <<"-------------------------------------------------"<<std ::endl;
    lion.attack(centaur.getName());
    centaur.takeDamage(lion.getAttackDamage());
    lion.attack(monster.getName());
    monster.takeDamage(lion.getAttackDamage());
    centaur.attack(lion.getName());
    lion.takeDamage(20);
    centaur.attack(monster.getName());
    monster.takeDamage(20);
    centaur.beRepaired(50);
    
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    monster.guardGate();
    return 0;
}