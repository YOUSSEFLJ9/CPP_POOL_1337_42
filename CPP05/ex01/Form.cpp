/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:43:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/13 15:38:50 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form :: Form(): name("default"), sign(false), rq_grade_sign(75), rq_grade_exc(75)
{
    std::cout <<GREEN "default constructor called" REST<<std::endl;
}
Form ::Form(const std::string name, const int rq_grade_exc, const int rq_grade_sign): name(name), sign(false), rq_grade_sign(rq_grade_sign), rq_grade_exc(rq_grade_exc)
{
    std::cout <<GREEN "parameterized constructor called" REST<< std::endl;
}
Form::Form(const Form &other):  name(other.name),rq_grade_sign(other.rq_grade_sign), rq_grade_exc(other.rq_grade_exc)
{
    std::cout <<GREEN "copy constructor called" REST<<std::endl;
    *this = other;
}
Form &Form::operator=(const Form &other)
{
    std::cout <<GREEN "copy assignment operator called" REST<< std::endl;
    if (&other != this)
    {
        this->sign = other.sign;
    }
    return *this;
}
Form::~Form()
{
    std :: cout <<GREEN "destructor called" REST<<std ::endl;
}

/*Getters*/
 const std::string &Form:: getName()const
 {
        return this->name;
 }
 const bool &Form:: getSignedstatus()const
 {
        return this->sign;
 }
const int &Form::getRqGradeSign()const
{
    return this->rq_grade_sign;
}
const int &Form::getRqGradeExc()const
{
   return this->rq_grade_exc;
}


void Form::beSigned(Bureaucrat &brt)
{
    if (brt.getGrade() <= this->rq_grade_sign)
        this->sign = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what()const throw()
{
    return "grade is too High";
}

const char *Form::GradeTooLowException::what()const throw()
{
    return "grade is too Low";
}

std::ostream &operator<<(std::ostream &out, Form &frm)
{
    out << frm.getName() << ", Form grade to be signed " << frm.getRqGradeSign() << ", to excute "<< frm.getRqGradeExc() << " and it is "<< (frm.getSignedstatus() ? "signed." : "Not signed.");
    return out;
}