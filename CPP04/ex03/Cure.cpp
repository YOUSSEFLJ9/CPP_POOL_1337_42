/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:15:47 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 18:17:27 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "\033[32mCure default constructor\033[0m" << std::endl;
}
Cure::Cure(std::string const & type) : AMateria(type)
{
    std::cout << "\033[32mCure parameter constructor\033[0m" << std::endl;
}

Cure::~Cure()
{
    std::cout << "\033[32mCure destructor\033[0m" << std::endl;
}

Cure::Cure(Cure const & rhs)
{
    std::cout << "\033[32mCure copy constructor\033[0m" << std::endl;
    *this = rhs;
}

Cure & Cure::operator=(Cure const & rhs)
{
    std::cout << "\033[32mCure operator assignation\033[0m" << std::endl;
    if (this != &rhs)
    {
       AMateria::operator=(rhs);
    }
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria *clone = new(std::nothrow) Cure(*this);
    if (!clone)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return NULL;
    }
    return clone;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}