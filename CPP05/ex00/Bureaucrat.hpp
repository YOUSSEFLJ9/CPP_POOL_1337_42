/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:10 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/22 16:37:50 by ymomen           ###   ########.fr       */
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
    Bureaucrat(std::string &name);
    Bureaucrat &operator=(Bureaucrat &brt);
    ~Bureaucrat();
    
    const int &getGrade()const;
    void setGrade(int &gd);
    
    class GradeTooHighException : public  std::exception
    {
        const char* what() const _NOEXCEPT;
    };
    class GradeTooHighException : public  std::exception
    {
        const char* what() const _NOEXCEPT;
    };
};