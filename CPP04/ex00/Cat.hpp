/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:11:58 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/04 15:55:42 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);
        ~Cat();
        void makeSound() const;
};