/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 09:50:57 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/07 10:23:34 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <set>

class Span
{
    private:
        unsigned int _max;
        std::multiset<int> _set;
    public:
        Span();
        Span(const unsigned  int &n);
        Span(const Span &other);
        Span &operator=(Span const &other);
        ~Span();
        
        void addNumber(int n);
        int shortestSpan() const;
        int longestSpan()const ;
        void FillSpan(unsigned int n);
        unsigned int getSize()const;
        void cleanSpan();
};

#endif // SPAN_HPP