/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:35:13 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/13 15:23:36 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool    sign;
        const int      rq_grade_sign;
        const int       rq_grade_exc;
        
    public:
        Form();
        Form(const std::string name, const int rq_sing, const int rq_exc);
        Form(const Form &other);
        Form &operator=(const Form& other);
        ~Form();
        //getters
        const std::string &getName()const;
        const bool &getSignedstatus()const;
        const int &getRqGradeSign()const;
        const int &getRqGradeExc()const;
        
        void beSigned(Bureaucrat &Brt);
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
            
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std:: ostream &out, const Form &Frm);