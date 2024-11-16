/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/11/09 10:33:27 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
      Bureaucrat f("henry", 3);
      Bureaucrat f1("henry", 100);
      Bureaucrat mid;
      mid = f;
      f.incrementGrade();
      f.incrementGrade();
      std::cout << f<<std:: endl;
      std::cout << mid<<std:: endl;
         Form attestation;
        Form att("mook", 2, 1); 
        att = attestation;
        att.beSigned(f);
        attestation.beSigned(f1);
    }
    catch  (std::exception &e)
    {
        std:: cout << e.what()<< std::endl;
    }
   
    
    
}