/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:42:20 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/16 15:59:05 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("target", 145, 137), target("target")
{
    std::cout << "default constructor of ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):AForm(target, 145, 137) ,target(target)
{
    std::cout << "parmconstructor of ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &SCF):AForm(SCF)
{
    this->target = SCF.target;
    std::cout << "copy constructor of ShrubberyCreationForm called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &SCF)
{
    std::cout << "operator overloading assignment of ShrubberyCreationForm called\n";
    if (&SCF  != this)
    {
        this->operator=(SCF);
        this->target =  SCF.target;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "destructer of ShrubberyCreationForm called";
}

void ShrubberyCreationForm::execute(Bureaucrat const &exceutor)const
{
    checkSign(exceutor);
    
}