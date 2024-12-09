/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:50:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/09 12:55:57 by ymomen           ###   ########.fr       */
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

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (&other != this)
    {
        this->_max = other._max;
        this->_set.insert(other._set.cbegin(), other._set.cend());
    }
    return *this;
}

Span::~Span()
{
    
}


void Span::addNumber(int n)
{
    if (_set.size() >= _max)
        throw std::out_of_range("Span is full");
    
    _set.insert(n);
}

int Span::shortestSpan()const
{
    if (_set.size() < 2)
        throw std::runtime_error("Not enough number elements inside Span");
    int shortnbr = std::numeric_limits<int>::max();
    
    for (std::multiset<int>::const_iterator it_mset = _set.begin(), next = std::next(it_mset); next != _set.end(); ++it_mset, ++next) 
    {
            shortnbr = std::min(shortnbr, *next - *it_mset);
    }
    if (shortnbr < 0)
        throw std::runtime_error("the shortestSpan is biger to hold in int");
    return shortnbr;
}

int Span::longestSpan()const
{
    if (_set.size() < 2)
        throw std::runtime_error("Not enough number elements inside Span");

   if (*_set.rbegin() - *_set.begin() < 0)
        throw std::runtime_error("the longestSpan is biger to hold in int");
        
    return *_set.rbegin() - *_set.begin();
}
void Span::FillSpan(unsigned int n)
{
    if (n + _set.size() > _max)
        throw std::out_of_range("the number of numbers you trying to fill out the Span is biger then the max.");
    
    srand(static_cast<unsigned int>(time(NULL)));
    for (unsigned int i = 0; _set.size() < _max && i < n; i++)
    {
        int k = rand();
        addNumber(k);
    }
}

unsigned int Span::getSize()const
{
    return _set.size();
}
void Span::cleanSpan()
{   
    _set.clear();
}