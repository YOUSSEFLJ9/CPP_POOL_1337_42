/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 21:40:25 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm :: AForm(): name("AForm"), sign(false), rq_grade_sign(75), rq_grade_exc(75)
{
    std::cout <<BLUE "default constructor AForm called" REST<<std::endl;
}
AForm ::AForm(const std::string name, const int rq_grade_exc, const int rq_grade_sign): name(name), sign(false), rq_grade_sign(rq_grade_sign), rq_grade_exc(rq_grade_exc)
{
    std::cout <<BLUE "parameterized constructor AForm called" REST<< std::endl;
}
AForm::AForm(const AForm &other):  name(other.name),rq_grade_sign(other.rq_grade_sign), rq_grade_exc(other.rq_grade_exc)
{
    std::cout <<BLUE "copy constructor AForm called" REST<<std::endl;
    *this = other;
}
AForm &AForm::operator=(const AForm &other)
{
    std::cout <<BLUE "copy assignment operator AForm called" REST<< std::endl;
    if (&other != this)
    {
        this->sign = other.sign;
    }
    return *this;
}
AForm::~AForm()
{
    std :: cout <<BLUE "destructor AForm called" REST<<std ::endl;
}

/*Getters*/
 const std::string &AForm:: getName()const
 {
        return this->name;
 }
 const bool &AForm:: getSignedstatus()const
 {
        return this->sign;
 }
const int &AForm::getRqGradeSign()const
{
    return this->rq_grade_sign;
}
const int &AForm::getRqGradeExc()const
{
   return this->rq_grade_exc;
}

//setter


void AForm::beSigned(Bureaucrat &brt)
{
    if (brt.getGrade() <= this->rq_grade_sign)
        this->sign = true;
    else
        throw GradeTooLowException;
}

const char *AForm::GradeTooHighException::what()const throw()
{
    return "grade is too High";
}

const char *AForm::GradeTooLowException::what()const throw()
{
    return "grade is too Low";
}

const char *AForm::FormNotSingException::what()const throw()
{
    return "Form Not Sing";
}

std::ostream &operator<<(std::ostream &out, AForm &frm)
{
    out << frm.getName() << ", AForm grade to be signed " << frm.getRqGradeSign() << ", to excute "<< frm.getRqGradeExc() << " and it is "<< (frm.getSignedstatus() ? "signed." : "Not signed.");
    return out;
}

void AForm::AbleToExcute(Bureaucrat const &executor)const
{
    if (!this->sign)
        throw FormNotSingException;
    if (executor.getGrade() > this->getRqGradeExc())
        throw GradeTooLowException;
} 