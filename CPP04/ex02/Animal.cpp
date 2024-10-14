/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 20:20:28 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal(): type("Animal")
{
    
    std::cout << "\033[32mAnimal default constructor called\033[0m" << std::endl;
}
Animal::Animal(const std::string &type): type(type)
{
    std::cout << "\033[32mAnimal constructor called\033[0m" << std::endl;
}

Animal::Animal(const Animal &A)
{
    std::cout << "\033[32mAnimal copy constructor called\033[0m" << std::endl;
    *this = A;
}
Animal &Animal::operator=(const Animal &a)
{
    std::cout << "\033[32mAnimal assignation operator called\033[0m" << std::endl;
    if (this != &a)
        type = a.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "\033[32mAnimal destructor called\033[0m" << std::endl;
}
const std::string& Animal:: getType() const
{
    return type;
}
