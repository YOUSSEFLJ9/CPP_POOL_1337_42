/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:25:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/01 11:36:55 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap monster("monster");
    ClapTrap cat(monster);
    cat.setName("cat");
    ClapTrap rat = cat; // rat(cat)
    rat.setName("rat");
    
    monster.setAttackDamage(8);
    cat.setAttackDamage(5);
    rat.setAttackDamage(1);

    std:: cout <<"-------------------------------------------------"<<std ::endl;
    
    cat.attack("rat");
    rat.takeDamage(cat.getAttackDamage());
    cat.attack("monster");
    monster.takeDamage(cat.getAttackDamage());
    
    rat.attack("cat");
    cat.takeDamage(rat.getAttackDamage());
    rat.attack("monster");
    monster.takeDamage(rat.getAttackDamage());
    
    monster.attack("cat");
    cat.takeDamage(monster.getAttackDamage());
    monster.attack("rat");
    rat.takeDamage(monster.getAttackDamage());

    rat.beRepaired(5);
    cat.beRepaired(5);
    monster.beRepaired(5);
    
    std:: cout <<"-------------------------------------------------"<<std ::endl;
    return 0;
}