/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:00:16 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/14 18:21:24 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_type = "default";
    this->available = true;
    std::cout << "\033[34mAMateria default constructor\033[0m" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "\033[34mAMateria destructor\033[0m" << std::endl;
}

AMateria::AMateria(AMateria const & rhs)
{
    std::cout << "\033[34mAMateria copy constructor\033[0m" << std::endl;
    *this = rhs;
}

AMateria & AMateria::operator=(AMateria const & Amt)
{
    std::cout << "\033[34mAMateria operator=\033[0m" << std::endl;
    if (this != &Amt)
    {
         _type = Amt._type;
        available = Amt.available;
    }
    return *this;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    this->available = true;
    std::cout << "\033[34mAMateria parameter constructor\033[0m" << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::setType(std::string const & type)
{
    _type = type;
}

void AMateria::use(ICharacter& target)
{
    std:: cout << "No effect from AMateria, this msg cant be showen" << std::endl;
    (void)target;
}

bool AMateria::isAvailable() const
{
    return available;
}

void AMateria::setAvailable(bool available)
{
    this->available = available;
}