/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/04 16:31:38 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout <<"-------------------" << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout <<"-------------------" << std::endl;
k->makeSound();
j->makeSound();
i->makeSound(); //will output the cat sound!
std::cout <<"-------------------" << std::endl;
delete j;
delete i;
delete k;
return 0;
}