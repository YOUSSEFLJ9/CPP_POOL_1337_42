/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:11:58 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/05 16:58:49 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);
        ~Cat();
        void makeSound() const;
    private:
        Brain *brain;
        void setBrainIdeas();
};