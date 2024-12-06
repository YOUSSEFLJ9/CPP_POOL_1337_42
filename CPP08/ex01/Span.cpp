/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:50:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/06 12:37:00 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _max = 1337;
}

Span::Span(const unsigned int &n): _max(n)
{
    
};

Span &Span::operator=(const Span &other)
{
    if (&other != this)
    {
        this->_max = other._max;
        this->_set = other._set;
    }
}

Span::~Span()
{
    
}
