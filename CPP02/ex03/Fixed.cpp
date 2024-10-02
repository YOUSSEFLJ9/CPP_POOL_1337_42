/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:55:49 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 20:51:31 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed :: _fractionalBits = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    _value = 0;
}
Fixed::Fixed(int const value)
{
    // std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}
Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;    
}
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    // std::cout << "Assignation operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
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



bool Fixed::operator>(const Fixed &fixed) const
{
    return (_value > fixed.getRawBits());
}
bool Fixed::operator<(const Fixed &fixed) const
{
    return (_value < fixed.getRawBits());
}
bool Fixed::operator>=(const Fixed &fixed) const
{
    return (_value >= fixed.getRawBits());
}
bool Fixed::operator<=(const Fixed &fixed) const
{
    return (_value <= fixed.getRawBits());
}
bool Fixed::operator==(const Fixed &fixed) const
{
    return (_value == fixed.getRawBits());
}
bool Fixed::operator!=(const Fixed &fixed) const
{
    return (_value != fixed.getRawBits());
}




Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(_value + fixed.getRawBits());
    return tmp;
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits(_value - fixed.getRawBits());
    return tmp;
}
Fixed Fixed::operator*(const Fixed &fixed) const
{
   Fixed tmp;
   tmp.setRawBits((_value * fixed.getRawBits()) >> _fractionalBits);
    return tmp;
}
Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed tmp;
    tmp.setRawBits((_value << _fractionalBits) / fixed.getRawBits());
    return tmp;
}

Fixed &Fixed::operator++()
{
    _value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed Otmp(*this);
    _value++;
    return Otmp;
}

Fixed &Fixed::operator--()
{
    _value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed Otmp(*this);
    operator--();
    return Otmp;
}



Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    return (fixed1 < fixed2) ? fixed1 : fixed2;
}
Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    return (fixed1 < fixed2) ? (Fixed&)fixed1 : (Fixed&)fixed2;
}
Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    return (fixed1 > fixed2) ? fixed1 : fixed2;
}
Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    return (fixed1 > fixed2) ? (Fixed&)fixed1 : (Fixed&)fixed2;
}