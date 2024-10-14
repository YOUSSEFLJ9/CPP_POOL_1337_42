/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:55:18 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/14 17:50:56 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);
        ~MateriaSource();
        
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
    private:
        AMateria *_materias[4];
        void _removeMaterias();
        void _dcopyMaterias(MateriaSource const &materiaSource);
};