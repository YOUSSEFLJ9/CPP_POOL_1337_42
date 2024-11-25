/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:34 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/25 14:48:19 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &SCF);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &SCF);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;

        class FailedOpenFileException: public std::exception
        {
            const char * what()const throw();
        }FailedOpenFileException;
    private:
        std::string target;
        void executeFromAction()const;

};