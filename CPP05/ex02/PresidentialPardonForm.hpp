/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:26 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/25 14:47:02 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &SCF);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &SCF);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;

    private:
        std::string target;
        void executeFromAction()const;

};