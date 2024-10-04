/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/04 16:10:30 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal(): type("Animal")
{
    
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const std::string &type): type(type)
{
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &A)
{
    *this = A;
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &a)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &a)
        type = a.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
const std::string& Animal:: getType() const
{
    return type;
}