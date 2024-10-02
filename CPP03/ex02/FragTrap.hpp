/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:07:40 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/02 19:04:11 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

//derived class from ClapTrap base class
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std:: string name);
        FragTrap(const FragTrap &ft);
        FragTrap &operator=(const FragTrap &ft);
        ~FragTrap();
        void highFivesGuys(void);
};