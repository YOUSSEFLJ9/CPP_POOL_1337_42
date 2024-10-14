/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:49:24 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 17:07:54 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &d);
        Dog &operator=(const Dog &d);
        ~Dog();
        void makeSound()const;
    private:
        void setBrainIdeas();
        Brain *brain;
};