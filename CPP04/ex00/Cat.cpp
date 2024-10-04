/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:11:34 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/04 16:04:14 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &c):Animal(c)
{
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "Miaou Miaou" << std::endl;
}