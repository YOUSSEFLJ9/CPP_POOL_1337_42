/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/22 23:54:20 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"


int main()
{
    try
    {Bureaucrat bureaucrat("zak", 1);
		Intern intern;
		AForm *form1;
		AForm *form2;
		form1 = intern.makeForm("Roboto", "Bender");
		form2 = intern.makeForm("Shrubbery", "saim");
		try
		{
			bureaucrat.signForm(*form1);
			bureaucrat.signForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			bureaucrat.executeFrom(*form1);
			form2->execute(bureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete form1;
		delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
    
}