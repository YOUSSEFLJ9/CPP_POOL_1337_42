/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:10:40 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 16:19:05 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():AForm("Form_RobotomyRequest", 72, 45), target("target")
{
    std::cout <<GREEN<<"default constructor of RobotomyRequestForm called"<<REST<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):AForm(target+ "RobotomyRequest", 72, 45) ,target(target)
{
    std::cout <<GREEN<< "parameterized of RobotomyRequestForm called"<<REST<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &SCF):AForm(SCF)
{
    this->target = SCF.target;
    std::cout <<GREEN<< "copy constructor of RobotomyRequestForm called"<<REST<<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &SCF)
{
    std::cout <<GREEN<< "operator overloading assignment of RobotomyRequestForm called"<<REST<<std::endl;
    if (&SCF  != this)
    {
        this->operator=(SCF);
        this->target =  SCF.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout <<GREEN<< "destructer of RobotomyRequestForm called"<<REST<<std::endl;
}

void RobotomyRequestForm::executeFromAction()const
{
    srand((unsigned int)time(NULL));
    int dif = rand() % 2;
    std::cout << "Makes some drilling noises"<<std::endl;
    if (dif % 2|| dif == RAND_MAX)
        std::cout <<this->target << "has been robotomized successfully 50%% of the time"<<std::endl;
    else
        std::cout <<this->target<< "has been failed" << std:: endl;

}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
        AbleToExcute(executor);
        executeFromAction();
}