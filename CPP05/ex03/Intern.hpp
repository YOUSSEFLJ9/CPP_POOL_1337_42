/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:43:26 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 23:50:04 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern &intn);
        Intern &operator=(const Intern& intrn);
        AForm *makeForm(const std::string &name,const std::string& target);
        class NotNameFormException: public std::exception
        {
            const char* what()const throw();
        }NotNameFormException;
    
};