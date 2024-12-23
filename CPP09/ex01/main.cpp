/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:57:59 by ymomen            #+#    #+#             */
/*   Updated: 2024/12/23 20:26:26 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Usage: ./RPN \"expretion\"\n";
    std::string arg(av[1]);
    RPN calucle;

    calucle.parse_arg(arg);
}