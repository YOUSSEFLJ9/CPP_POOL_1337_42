/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:49:54 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 14:19:46 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &d):Animal(d)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &d)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &d)
        this->type = d.type;
    return *this;
}
void Dog::makeSound()const
{
    std::cout << "Wouf Wouf" << std::endl;
}
