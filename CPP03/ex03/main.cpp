/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:25:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/03 17:59:50 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

    DiamondTrap Luffy("Luffy");
    DiamondTrap Zoro(Luffy);
    Zoro.setName("Zoro");
    Zoro.ClapTrap::setName("Zoro_clap_name");
    DiamondTrap Sanji = Zoro;
    Sanji.setName("Sanji");
    Sanji.ClapTrap::setName("Sanji_clap_name");
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    DiamondTrap Kaido("Kaido");
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
    Luffy.guardGate();
    Luffy.highFivesGuys();
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    Luffy.whoAmI();
    Zoro.whoAmI();
    Sanji.whoAmI();
    Kaido.whoAmI();
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    return 0;
    
    
    return 0;
}