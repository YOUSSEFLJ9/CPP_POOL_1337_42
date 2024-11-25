/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:32 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/25 14:48:13 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &SCF);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &SCF);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;

    private:
        std::string target;
        void executeFromAction()const;

};