/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/23 18:08:15 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    try
    {
      Bureaucrat f("Bureaucrat", 1);
      Bureaucrat mid;
      f.incrementGrade();
    }
    catch  (std:: exception &e)
    {
        std:: cout << e.what()<< std::endl;
    }
    try
    {
      Bureaucrat A("Luis", 149);
      std::cout << A<<std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
}