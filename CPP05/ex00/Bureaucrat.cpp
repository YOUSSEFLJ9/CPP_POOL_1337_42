/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:08 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/22 16:25:46 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    
}
Bureaucrat::Bureaucrat( Bureaucrat &BRT)
{
    
}
Bureaucrat::Bureaucrat(std::string &name)
{
    
}
Bureaucrat::~Bureaucrat()
{
    
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat &BRT)
{
    
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    if (Bureaucrat::getGrade() < 1)
        return ("grade is too low");
    else if (Bureaucrat::getGrade > 150)
        return ("grade is too high");
    else
        
}   
