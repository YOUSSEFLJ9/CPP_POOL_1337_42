/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:18:22 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/07 10:22:44 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(50);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span sp(2000000);
        sp.FillSpan(2000);
        std::cout << sp.shortestSpan()<<std::endl;
        std::cout << sp.longestSpan()<<std::endl;
        std::cout << sp.getSize() << std::endl;
        Span f = sp;
        sp.cleanSpan();
        std::cout << f.shortestSpan()<<std::endl;
        std::cout << f.longestSpan()<<std::endl;
        std::cout << f.getSize() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}