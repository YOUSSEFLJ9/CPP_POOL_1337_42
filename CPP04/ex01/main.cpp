/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 18:58:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void leak()
{
    system("leaks ex01");
}

int main()
{
    atexit(leak);
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    std::cout <<"-------------------"<< std::endl;
    delete cat;//should not create a leak
    delete dog;
    std::cout <<"-------------------"<< std::endl;
    Animal *tab[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    std::cout <<"-------------------"<< std::endl;
    for (int i = 0; i < 4; i++)
        tab[i]->makeSound();
    std::cout <<"-------------------"<< std::endl;
    for (int i = 0; i < 4; i++)
        delete tab[i];
    std::cout <<"-------------------"<< std::endl;
return 0;
}