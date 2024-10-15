/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:28:58 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 16:11:33 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter
{
    public:
        Character();
        Character(Character const &crt);
        Character &operator=(Character const &crt);
        ~Character();
        Character(std::string const &name);
        
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        AMateria *_materias[4];
        std::string _name;
        int _materiasCount;
        void _copy_materias(Character const &crt);
        void _delete_materias();
       
    
};
     