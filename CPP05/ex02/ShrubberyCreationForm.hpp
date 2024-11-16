/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:18:34 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/16 15:58:52 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string &target);
        ShrubberyCreationForm(ShrubberyCreationForm &SCF);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &SCF);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
    private:
        std::string target;

};