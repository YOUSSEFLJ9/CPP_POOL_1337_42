/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:05:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/12 13:05:13 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon  &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
        ~HumanA();
        
};