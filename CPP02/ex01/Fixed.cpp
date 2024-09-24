/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 04:32:37 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed :: _fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}
Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;    
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}


std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
