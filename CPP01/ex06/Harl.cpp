/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:14:04 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/14 19:08:41 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}
int Harl::get_idex(std::string level)
{
    if (level == "DEBUG")
        return (DEBUG);
    else if (level == "INFO")
        return (INFO);
    else if (level == "WARNING")
        return (WARNING);
    else if (level == "ERROR")
        return (ERROR);
    return (0);
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put nough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;  
}

void Harl::complain(std::string level)
{
   int idx = get_idex(level);
    switch (idx)
    {
         case DEBUG:
              debug();
         case INFO:
              info();
         case WARNING:
              warning();
         case ERROR:
              error(); break;
         default:
            {
                std::cout <<"Error\n";
                std::cout <<"level can be : DEBUG, INFO, WARNING or ERROR"<<std::endl;
                exit(1);
            }
    }
}
