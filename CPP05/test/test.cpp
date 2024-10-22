/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:33:58 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/22 12:51:24 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int divide(int a, int b)
{
    if (b == 0)
        throw std::invalid_argument("division by zero");
    return a / b;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a = std::stoi(av[1]);
        int b = std::stoi(av[2]);
        try
        {
            std::cout << divide(a, b) << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: "<< e.what() << std::endl;
            
        }
    }
    else
        std::cerr << "usage: ./test a b" << std::endl;
    
    return 0;
}