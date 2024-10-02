/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:25:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 19:30:54 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Luffy("Luffy");
    FragTrap Zoro(Luffy);
    FragTrap Sanji = Zoro;
    Zoro.setName("Zoro");
    Sanji.setName("Sanji");
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    FragTrap Kaido("Kaido");
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    Luffy.attack("Kaido");
    Kaido.takeDamage(Luffy.getAttackDamage());
    Zoro.attack("Kaido");
    Kaido.takeDamage(Zoro.getAttackDamage());
    Sanji.attack("Kaido");
    Kaido.takeDamage(Sanji.getAttackDamage());
    Kaido.beRepaired(18);
    Kaido.attack("Luffy");
    Luffy.takeDamage(Kaido.getAttackDamage());
    Luffy.attack("Kaido");
    Kaido.takeDamage(Luffy.getAttackDamage());
    Kaido.beRepaired(50);
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    Luffy.highFivesGuys();
    return 0;
}