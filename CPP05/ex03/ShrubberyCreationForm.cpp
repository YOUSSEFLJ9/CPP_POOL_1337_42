/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:42:20 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 16:18:43 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Form_ShrubberyCreation", 145, 137), target("target")
{
    std::cout <<MAGENTA <<"default constructor of ShrubberyCreationForm called "<<REST<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm(target+ "ShrubberyCreation", 145, 137) ,target(target)
{
    std::cout <<MAGENTA << "parmconstructor of ShrubberyCreationForm called "<<REST<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &SCF):AForm(SCF)
{
    this->target = SCF.target;
    std::cout << MAGENTA <<"copy constructor of ShrubberyCreationForm called "<<REST<<std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &SCF)
{
    std::cout << MAGENTA <<"operator overloading assignment of ShrubberyCreationForm called "<<REST<<std::endl;
    if (&SCF  != this)
    {
        this->operator=(SCF);
        this->target =  SCF.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << MAGENTA <<"destructer of ShrubberyCreationForm called "<<REST<<std::endl;
}

const char *ShrubberyCreationForm::FailedOpenFileException::what()const throw()
{
    return "Failed to open the file";
}

void ShrubberyCreationForm::executeFromAction()const
{
    std::ofstream File;

    File.open(this->target + "_shrubbery");
    if (!File.is_open())
        throw  FailedOpenFileException;

    
    std::string tree = "                   *\n"
"                  ***\n"
"                 *****\n"
"                *******\n"
"               *********\n"
"              ***********\n"
"             *************\n"
"            ***************\n"
"           *****************\n"
"          *******************\n"
"         *********************\n"
"        ***********************\n"
"       *************************\n"
"      ***************************\n"
"     *****************************\n"
"    *******************************\n"
"   *********************************\n"
"  ***********************************\n"
" *************************************\n"
"***************************************\n"
"                   |||\n"
"                   |||\n"
"                   |||\n";

File << tree;
File.close();

}

void ShrubberyCreationForm::execute(Bureaucrat const &exceutor)const
{
    AbleToExcute(exceutor);
    try
    {    
        executeFromAction();
    }
    catch (std::exception &e)
    {
        std::cout << e.what()<<std ::endl;
    }
}
