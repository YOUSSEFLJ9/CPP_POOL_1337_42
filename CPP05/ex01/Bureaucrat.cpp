/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:08 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/24 12:05:03 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("Default_Bureaucrat")
{
    std::cout << RED "Bureaucrat Default constructor is called" REST<< std::endl;
    grade = 50;
}
Bureaucrat::Bureaucrat( Bureaucrat &BRT)
{
    std::cout <<RED"Bureaucrat copy constructor is called" REST<< std::endl;
    *this = BRT;
}
Bureaucrat::Bureaucrat(const std::string &name , int grade): name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade <= 0)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout << RED"Bureaucrat parameterized constructor is called" REST<< std::endl;
    
}
Bureaucrat::~Bureaucrat()
{
    std::cout <<RED "Bureaucrat destructor is called" REST<< std::endl;
    
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &BRT)
{
    std::cout <<RED "Bureaucrat operator overloading Assignment is called" REST<< std::endl;
    if (this != &BRT)
    {
        this->grade = BRT.grade;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &BRT)
{
    out << BRT.getName() << ", bureaucrat grade " << BRT.getGrade();
    return out;
}

void Bureaucrat ::incrementGrade(void)
{
    this->grade--;
    if (this->grade <= 0 )
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const int &Bureaucrat::getGrade()const
{
    return this->grade;
}

const std::string &Bureaucrat::getName()const
{
    return this->name;
}



const char * Bureaucrat::GradeTooHighException::what() const throw()
{
        return ("grade is too high");       
}
const char *Bureaucrat::GradeTooLowException::what()const throw()

{
    return ("grade is too Low");
}


void Bureaucrat::signForm(Form &Frm)
{
    try 
    {
        Frm.beSigned(*this);
        std:: cout << name << " signed " << Frm.getName()<< std::endl;
    }catch(std::exception &e) {
        std:: cout << name << " couldn’t sign " << Frm.getName()<< " beacause "<< e.what() << std::endl;
    }
}

