/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:14:55 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/14 18:08:02 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    _dcopyMaterias(other);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
    _removeMaterias();
    _dcopyMaterias(other);   
    }
    return *this;
}

MateriaSource ::~MateriaSource()
{
    _removeMaterias();
}

void MateriaSource::_removeMaterias()
{
    for(int i = 0; i < 4; i++)
        if (_materias[i])
        {
            delete _materias[i];
            _materias[i] = NULL;
        }
}
void MateriaSource::_dcopyMaterias(MateriaSource const &MateriaSource)
{
    for (int i = 0; i < 4; i++)
        if (MateriaSource._materias[i])
            _materias[i] = MateriaSource._materias[i]->clone();
        else
            _materias[i] = NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
        if (!_materias[i])
        {
            _materias[i] = m;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    return 0;
}