/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:49:54 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 19:27:08 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    brain = new(std::nothrow) Brain();
    if (!brain)
        std::cout << "\033[34mMemory allocation failed\033[0m" << std::endl;
    else
    {
        std::cout << "\033[34mDog default constructor called\033[0m" << std::endl;
        this->setBrainIdeas();
    }
}
Dog::Dog(const Dog &d):Animal(d)
{
    brain = new(std::nothrow) Brain(*d.brain);
    if (!brain)
        std::cout << "\033[34mMemory allocation failed\033[0m" << std::endl;
    else
    {
        std::cout << "\033[34mDog copy constructor called\033[0m" << std::endl;
        this->setBrainIdeas();   
    }
}
Dog::~Dog()
{
    delete brain;
    std::cout << "\033[34mDog destructor called\033[0m" << std::endl;
}
Dog &Dog::operator=(const Dog &d)
{
    std::cout << "\033[34mDog assignation operator called\033[0m" << std::endl;
    if (this != &d)
    {
        this->type = d.type;
        *brain = *d.brain;
    }
    return *this;
}
void Dog::makeSound()const
{
    std::cout << "\033[34mWouf Wouf" << std::endl;
    if (brain)
        std::cout << "\033[34mI have ideas: " << brain->getIdeas()[0] <<", "+brain->getIdeas()[1] << ", "+brain->getIdeas()[2]<<"\033[0m"<<std::endl;
}

void Dog::setBrainIdeas()
{
    std::string ideas[100] = {"I am a dog", "I am a good friend", "I love my owner"};
    if (brain)
        brain->setIdeas(ideas);
}