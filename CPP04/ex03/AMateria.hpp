/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:28:32 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/06 21:57:58 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
        // unsigned int _xp;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(AMateria const & rhs);
        AMateria & operator=(AMateria const & rhs);
    
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        void setType(std::string const & type);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        // unsigned int getXP() const;
};