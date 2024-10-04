/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:44:35 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/04 16:32:23 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);
        virtual ~Animal();
        const std::string &getType() const;
        virtual void makeSound() const = 0;
};