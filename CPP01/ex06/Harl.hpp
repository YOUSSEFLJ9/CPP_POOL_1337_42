/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:36:46 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/17 17:44:47 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include  <iostream>

enum levels{DEBUG = 1,INFO=2, WARNING=3, ERROR=4 };

class Harl
{
private:
   void debug(void);
   void info(void);
   void warning(void);
   void error(void);
   int get_idex(std::string level);
public:
    Harl();
    ~Harl();
    void complain(std::string level);

};
