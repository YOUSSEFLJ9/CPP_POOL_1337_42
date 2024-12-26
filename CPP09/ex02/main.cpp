/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:08 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/25 18:11:08 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe [int1 int2 int3 ...]" << std::endl;
        return 1;
    }
    try
    {
        PmergeMe p;
        for (int i = 1; i < ac; i++)
            p.ParseArgs(static_cast<std::string>(av[i]));
        p.print_v();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
            
        
}