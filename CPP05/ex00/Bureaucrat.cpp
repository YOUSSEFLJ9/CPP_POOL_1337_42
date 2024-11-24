/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:08 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/24 12:05:22 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default")
{
    std::cout <<"Bureaucrat Default constructor is called"<< std::endl;
    grade = 50;
}
Bureaucrat::Bureaucrat( Bureaucrat &BRT)
{
    std::cout <<"Bureaucrat copy constructor is called"<< std::endl;
    *this = BRT;
}
Bureaucrat::Bureaucrat(const std::string &name , int grade): name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade <= 0)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout <<"Bureaucrat parameterized constructor is called"<< std::endl;
    
}
Bureaucrat::~Bureaucrat()
{
    std::cout <<"Bureaucrat destructor is called"<< std::endl;
    
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &BRT)
{
    std::cout <<"operator overloading Assignment is called" << std::endl;
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
