/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:26:54 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/23 18:32:20 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Form_PresidentialPardon", 25, 5), target("target")
{
    std::cout <<YALLOW<<"default constructor of PresidentialPardonForm called"<<REST<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm(target+"_PresidentialPardon", 25, 5) ,target(target)
{
    std::cout <<YALLOW<< "parmconstructor of PresidentialPardonForm called"<<REST<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &SCF):AForm(SCF)
{
    this->target = SCF.target;
    std::cout <<YALLOW<< "copy constructor of PresidentialPardonForm called"<<REST<<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &SCF)
{
    std::cout <<YALLOW<< "operator overloading assignment of PresidentialPardonForm called"<<REST<<std::endl;
    if (&SCF  != this)
    {
        this->operator=(SCF);
        this->target =  SCF.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout <<YALLOW<< "destructer of PresidentialPardonForm called"<<REST<<std::endl;
}

void PresidentialPardonForm::executeFromAction()const
{
    std:: cout << this->target << " as been pardoned by Zaphod Beeblebrox."<<std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &exucetor)const
{
    AbleToExcute(exucetor);
    executeFromAction();
}