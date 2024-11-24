/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/23 18:03:18 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try
    {
        Bureaucrat f("henry", 91);
        ShrubberyCreationForm dd("henry");
        dd.beSigned(f);
        dd.execute(f);
        std::cout << "all good\n";
    }
    catch  (std::exception &e)
    {
        std:: cout << e.what()<< std::endl;
    }
    std::cout <<"---------------------------\n";
    try
    {
        PresidentialPardonForm A;
        Bureaucrat Ahmed("ahmed", 5);
        Ahmed.signForm(A);
        Ahmed.executeFrom(A);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout <<"---------------------------\n";
    try
    {
        RobotomyRequestForm B("Robot");
        Bureaucrat henry("luis", 16);
        B.execute(henry);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout <<"---------------------------\n";

    return (0);
    
}