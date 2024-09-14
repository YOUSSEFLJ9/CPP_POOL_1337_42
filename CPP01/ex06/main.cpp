/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:35:00 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/14 18:57:44 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout <<"Error\n";
        std::cout <<"Usage :" << av[0] <<" level"<<std::endl;
        return (1);
    }
    
    std::string level = av[1];
    Harl harl;
    harl.complain(level);
    
    return (0);
}