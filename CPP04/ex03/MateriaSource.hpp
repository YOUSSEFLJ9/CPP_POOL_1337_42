/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:55:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/06 22:57:00 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &materiaSource);
        MateriaSource &operator=(MateriaSource const &materiaSource);
        ~MateriaSource();
        
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
    // private:
    //     AMateria *_materias[4];
    //     void _delete_materias();
    //     void _copy_materias(MateriaSource const &materiaSource);
};