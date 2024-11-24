/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/23 18:18:24 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
      Bureaucrat f("henry", 3);
      
      f.incrementGrade();
      f.incrementGrade();
      std::cout << f<<std:: endl;
        Form attestation;
        Form att("register", 2, 1); 
        att = attestation;
        try
        {
            Bureaucrat f1("henry", 100);
            std::cout << f1<<std:: endl;
            f1.signForm(attestation);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
         f.signForm(att); 
        
    }
    catch  (std::exception &e)
    {
        std:: cout << e.what()<< std::endl;
    }
   
    
    
}