/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/24 11:58:24 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YALLOW "\033[33m"
#define  REST "\033[0m" 


class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &brt);
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat &operator=(const Bureaucrat &brt);
    void incrementGrade(void);
    void decrementGrade(void);
    ~Bureaucrat();
    const int &getGrade()const;
    const std::string &getName()const;

    void signForm(AForm &frm) ;
    
    class GradeTooHighException : public  std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public  std::exception
    {
        const char* what() const throw();
    };

    void executeFrom(AForm const & form);

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &BRT);