/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:14:55 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 18:56:12 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "\033[44mMateriaSource default constructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    std::cout << "\033[44mMateriaSource copy constructor\033[0m" << std::endl;
    _dcopyMaterias(other);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    std::cout << "\033[44mMateriaSource operator assignation\033[0m" << std::endl;
    if (this != &other)
    {
        _removeMaterias();
        _dcopyMaterias(other);   
    }
    return *this;
}

MateriaSource ::~MateriaSource()
{
    std::cout << "\033[44mMateriaSource destructor\033[0m" << std::endl;
    _removeMaterias();
}

void MateriaSource::_removeMaterias()
{
    for(int i = 0; i < 4; i++)
    {    
        if (_materias[i])
        {
            delete _materias[i];
            _materias[i] = NULL;
        }
    }
}
void MateriaSource::_dcopyMaterias(MateriaSource const &MateriaSource)
{
    for (int i = 0; i < 4; i++)
    {
        if (MateriaSource._materias[i])
            _materias[i] = MateriaSource._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {    
        if (!_materias[i])
        {
            _materias[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return 0;
}