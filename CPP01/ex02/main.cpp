/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:39:47 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/10 16:49:22 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address in memory of the string    : " << &str << std::endl;
    std::cout << "Address in memory of the stringPTR : " << stringPTR << std::endl;
    std::cout << "Address in memory of the stringREF : " << &stringREF << std::endl;

    std::cout << "The value String    : " << str << std::endl;
    std::cout << "The value StringPTR : " << *stringPTR << std::endl;
    std::cout << "The value StringREF : " << stringREF << std::endl;
    
}