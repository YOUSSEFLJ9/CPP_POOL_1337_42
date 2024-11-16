/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/16 16:37:27 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm :: AForm(): name("default"), sign(false), rq_grade_sign(75), rq_grade_exc(75)
{
    std::cout <<GREEN "default constructor called" REST<<std::endl;
}
AForm ::AForm(const std::string name, const int rq_grade_exc, const int rq_grade_sign): name(name), sign(false), rq_grade_sign(rq_grade_sign), rq_grade_exc(rq_grade_exc)
{
    std::cout <<GREEN "parameterized constructor called" REST<< std::endl;
}
AForm::AForm(const AForm &other):  name(other.name),rq_grade_sign(other.rq_grade_sign), rq_grade_exc(other.rq_grade_exc)
{
    std::cout <<GREEN "copy constructor called" REST<<std::endl;
    *this = other;
}
AForm &AForm::operator=(const AForm &other)
{
    std::cout <<GREEN "copy assignment operator called" REST<< std::endl;
    if (&other != this)
    {
        this->sign = other.sign;
    }
    return *this;
}
AForm::~AForm()
{
    std :: cout <<GREEN "destructor called" REST<<std ::endl;
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
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what()const throw()
{
    return "grade is too High";
}

const char *AForm::GradeTooLowException::what()const throw()
{
    return "grade is too Low";
}

std::ostream &operator<<(std::ostream &out, AForm &frm)
{
    out << frm.getName() << ", AForm grade to be signed " << frm.getRqGradeSign() << ", to excute "<< frm.getRqGradeExc() << " and it is "<< (frm.getSignedstatus() ? "signed." : "Not signed.");
    return out;
}

void AForm::checkSign(Bureaucrat const &execute)const
{
    if (!this->sign)
        throw
} 