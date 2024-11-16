/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:53:28 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/23 12:04:13 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


// void ff()
// {
//     system("leaks ex03");
// }
    // atexit(ff);
int main()
{
    IMateriaSource* src = new MateriaSource();
    std::cout <<"-------------------" << std::endl;
    src->learnMateria(new Ice());
    std::cout <<"-------------------" << std::endl;

    src->learnMateria(new Cure());
    std::cout <<"-------------------" << std::endl;

    ICharacter* me = new Character("me");
    std::cout <<"-------------------" << std::endl;
    AMateria* tmp;
    std::cout <<"-------------------" << std::endl;
    tmp = src->createMateria("ice");
    std::cout <<"-------------------" << std::endl;
    me->equip(tmp);
    std::cout <<"-------------------" << std::endl;
    tmp = src->createMateria("cure");
    std::cout <<"-------------------" << std::endl;
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    std::cout <<"-------------------" << std::endl;

    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(0);
    me->use(0, *bob);
    std::cout <<"-------------------" << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}