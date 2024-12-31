/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:32:08 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/31 20:08:45 by ymomen           ###   ########.fr       */
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
        struct timeval startTv, endTv;
        struct timeval startTd, endTd;
        PmergeMe p;
        for (int i = 1; i < ac; i++)
            p.ParseArgs(static_cast<std::string>(av[i]));
        std::cout <<"Before: ";
        p.print_v();
        // std::cout <<"--------------------------------------------\n";
        gettimeofday(&startTv, NULL);
        p.fordJohnsonSort_v();
        gettimeofday(&endTv, NULL);
        // std::cout <<"--------------------------------------------"<< std::endl;
        gettimeofday(&startTd, NULL);
        p.fordJohnsonSort_d();
        gettimeofday(&endTd, NULL);
        std::cout << "After: ";    
        p.print_d();
        std::cout <<"Vector time: "<<(endTv.tv_sec- startTv.tv_sec)+ (endTv.tv_usec- startTv.tv_usec)/1000000.0 << std::endl;
        std::cout <<"Deque time : "<<(endTd.tv_sec- startTd.tv_sec)+ (endTd.tv_usec- startTd.tv_usec)/1000000.0 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
            
        
}