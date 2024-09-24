/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:41:28 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/24 20:01:57 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};