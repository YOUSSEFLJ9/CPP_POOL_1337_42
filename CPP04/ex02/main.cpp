/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/23 16:27:54 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// void ff()
// {
//     system("leaks ex02");
// }
//     atexit(ff);
int main()
{

    const Animal* cat = new(std::nothrow) Cat();
    if (!cat){
        std::cout << "Memory allocation failed" << std::endl;
        return 1;}
    const Animal* dog = new(std::nothrow) Dog();
    if (!dog){
        std::cout << "Memory allocation failed" << std::endl;
        return 1;}
    
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    std::cout <<"-------------------"<< std::endl;
    delete cat;
    delete dog;
    std::cout <<"-------------------"<< std::endl;
    Animal *tab[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            tab[i] = new(std::nothrow) Dog();
        else
            tab[i] = new(std::nothrow) Cat();
        if (!tab[i]){
            std::cout << "Memory allocation failed" << std::endl;
            return 1;}
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