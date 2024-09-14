/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:10:45 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/14 18:37:47 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
private:
   void debug(void);
   void info(void);
   void warning(void);
   void error(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);

};
