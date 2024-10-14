/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:28:58 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/06 22:32:09 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

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
        std::string name;
        int materias_count;
        void _copy_materias(Character const &crt);
        void _delete_materias();
        
    
};
     