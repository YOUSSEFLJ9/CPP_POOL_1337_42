/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 09:50:57 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/06 12:06:30 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
    private:
        unsigned int _max;
        std::multiset<int> _set;
    public:
        Span();
        Span(const unsigned int &n);
        Span(const Span &other);
        Span &operator=(Span const &other);
        ~Span();
        
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        
    
    
};

#endif // SPAN_HPP