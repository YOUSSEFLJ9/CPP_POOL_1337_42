/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:15:46 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 18:44:16 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "\033[31mIce default constructor\033[0m" << std::endl;
}

Ice::~Ice()
{
    std::cout << "\033[31mIce destructor\033[0m" << std::endl;
}
Ice::Ice(std::string const & type) : AMateria(type)
{
    std::cout << "\033[31mIce parameter constructor\033[0m" << std::endl;
}

Ice::Ice(Ice const & rhs)
{
    std::cout << "\033[31mIce copy constructor\033[0m" << std::endl;
    *this = rhs;
}

Ice & Ice::operator=(Ice const & rhs)
{
    std::cout << "\033[31mIce operator assignation\033[0m" << std::endl;
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria* cloneIce =new(std::nothrow) Ice(*this);
    if (!cloneIce)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return NULL;
    }
    return cloneIce;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}