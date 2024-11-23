/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/23 15:23:36 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    try
    {
		Bureaucrat Luis("luis", 5);
		Intern intern;
		AForm *dossier1;
		AForm *dossier2;
		dossier1 = intern.makeForm("Presidential", "kingForm");
		dossier2 = intern.makeForm("Shrubbery", "alber");
		std::cout <<"_________________________________\n";
		try
		{
			Luis.signForm(*dossier1);

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Luis.executeFrom(*dossier1);
			Luis.executeFrom(*dossier2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete dossier1;
		delete dossier2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
    
}