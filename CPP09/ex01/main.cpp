/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:57:59 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/24 12:13:31 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Usage: ./RPN \"expression\"\n";
    else
    {        
        std::string arg = av[1];
        RPN calucle;
        try
        {
            calucle.parse_arg(arg); 
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}