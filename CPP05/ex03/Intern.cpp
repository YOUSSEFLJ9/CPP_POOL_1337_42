/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:47:22 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/24 11:52:22 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout <<CYAN "the default constructor of intern called" RESETCOLOR<< std::endl;
}


Intern::Intern(const Intern &intrn)
{
 std::cout <<CYAN"intern copy constructor is called" RESETCOLOR<< std::endl;
    *this = intrn;   
}

Intern &Intern::operator=(const Intern & intrn)
{
    std::cout <<CYAN "Intern operator overloading Assignment is called" RESETCOLOR<< std::endl;
    (void)intrn;
    return (*this);
}
Intern::~Intern()
{
    std::cout <<CYAN"Intern destructor is called" RESETCOLOR<< std::endl;
}


AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string Forms[] = {"Presidential", "Roboto", "Shrubbery"};
    int i = -1;
    int pos = 50;
    
    AForm *Form;
    while(++i < 3)
    {
        if (Forms[i] == name)
        {
            pos=i;
            break;
        }
    }
    switch (pos)
    {
    case 0:
    {
        Form = new PresidentialPardonForm(target);
        break;
    }
    case 1:
    {
        Form = new RobotomyRequestForm(target);
        break;
    }
    case 2:
    {   
        Form = new ShrubberyCreationForm(target);
        break;
    }
    default:
        throw NotNameFormException;
    }
    std::cout << "Intern creates "<< target<<std::endl;
    return Form;
}

const char *Intern::NotNameFormException::what()const throw()
{
    return "This name form doesn't exist";
}