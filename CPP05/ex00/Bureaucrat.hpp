/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/22 22:50:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
    Bureaucrat();
    Bureaucrat(Bureaucrat &brt);
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat &operator=(Bureaucrat &brt);
    void incrementGrade(void);
    void decrementGrade(void);
    ~Bureaucrat();
    const int &getGrade()const;
    const std::string &getName()const;
    
    class GradeTooHighException : public  std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public  std::exception
    {
        const char* what() const throw();
    };

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &BRT);