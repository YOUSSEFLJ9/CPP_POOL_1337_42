/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:32 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 14:37:09 by ymomen           ###   ########.fr       */
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
        RobotomyRequestForm(RobotomyRequestForm &SCF);
        RobotomyRequestForm &operator=(RobotomyRequestForm &SCF);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
        void executeFromAction()const;

    private:
        std::string target;

};