/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:11:34 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 19:26:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    brain = new(std::nothrow) Brain();
    if (!brain)
    {
        std::cout << "\033[33mMemory allocation failed\033[0m" << std::endl;
    }
        std::cout << "\033[33mCat default constructor called\033[0m" << std::endl;
        this->setBrainIdeas();

}
Cat::Cat(const Cat &c):Animal(c)
{
    brain = new(std::nothrow) Brain(*c.brain);
    if (!brain)
        std::cout << "\033[33mMemory allocation failed\033[0m" << std::endl;
    else
    {
        std::cout << "\033[33mCat copy constructor called\033[0m" << std::endl;
        this->setBrainIdeas();
    }
}
Cat::~Cat()
{
    delete brain;
    std::cout << "\033[33mCat destructor called\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "\033[33mCat assignation operator called\033[0m" << std::endl;
    if (this != &c)
    {
        this->type = c.type;
        *brain = *c.brain;
    }   
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "\033[33mMiaou Miaou" << std::endl;
    if (brain)
        std::cout << "\033[33mI have ideas: " << brain->getIdeas()[0] <<", "+brain->getIdeas()[1] << ", "+brain->getIdeas()[2]<< "\033[0m"<<std::endl;
}

void Cat::setBrainIdeas()
{
    std::string ideas[100] = {"I am a cat", "I do what i want", "I'am not a snitch"};
    if (brain)
        brain->setIdeas(ideas);
}
