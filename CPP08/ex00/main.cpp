/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:27:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/02 16:06:36 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{

    try
    {
        std::vector<int> v;
        for (int i = 0; i < 10; i++)
            v.push_back(i);
        std::cout << easyfind(v, 5) << std::endl;
        std::cout << easyfind(v, 10) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

}