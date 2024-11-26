/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:19:42 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/26 13:00:11 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac,char **av)
{   
    if(ac != 2)
        std::cout <<"Usage : ./convert [value]"<<std::endl;
    else
        ScalarConverter::convert(av[1]);
}
