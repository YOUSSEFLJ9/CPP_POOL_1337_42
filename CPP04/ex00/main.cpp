/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 19:09:45 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();

std::cout <<"-------------------" << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout <<"-------------------" << std::endl;
meta->makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();
std::cout <<"-------------------" << std::endl;
delete j;
delete i;
delete meta;

std::cout <<"-------------------------------" << std::endl;
const WrongAnimal* worngcat = new WrongCat();
const WrongAnimal* wongaminal = new WrongAnimal();
std::cout <<"-------------------------------" << std::endl;
std::cout << worngcat->getType() << " " << std::endl;
std::cout << wongaminal->getType() << " " << std::endl;
std::cout <<"-------------------------------" << std::endl;
worngcat->makeSound();
wongaminal->makeSound();
std::cout <<"-------------------------------" << std::endl;
delete worngcat;
delete wongaminal;
return 0;
}