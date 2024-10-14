/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:51:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/06 22:46:50 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default"), materias_count(0)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
    std::cout << "\033[31mCharacter default constructor\033[0m" << std::endl;
}
Character::Character(std::string const &name) : name(name), materias_count(0)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
    std::cout << "\033[31mCharacter parameter constructor\033[0m" << std::endl;
}
Character::Character(Character const &crt)
{
    std::cout << "\033[31mCharacter copy constructor\033[0m" << std::endl;
    *this = crt;
}
Character &Character::operator=(Character const &crt)
{
    std::cout << "\033[31mCharacter operator=\033[0m" << std::endl;
    if (this != &crt)
    {
        _delete_materias();
        _copy_materias(crt);
        name = crt.name;
        materias_count = crt.materias_count;
    }
    return *this;
}
Character::~Character()
{
    std::cout << "\033[31mCharacter destructor\033[0m" << std::endl;
    _delete_materias();
}

std::string const &Character::getName() const
{
    return name;
}


void Character::equip(AMateria* m)
{
    if (materias_count == 4 || !m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!_materias[i])
        {
            _materias[i] = m;
            materias_count++;
            break;
        }
        if (i == 3)
            std::cout << "Character has no more slots" << std::endl;
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !this->_materias[idx])
    {
        std::cout << "No materia at this index" << std::endl;
        return;
    }
    _materias[idx] = NULL;
    materias_count--;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !this->_materias[idx])
       std::cout << "No materia at this index" << std::endl;
    else
        _materias[idx]->use(target);
}

void Character::_copy_materias(Character const &crt)
{
    for(int i = 0; i < 4; i++)
    {
        if (crt._materias[i])
            _materias[i] = crt._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}
void Character::_delete_materias()
{
    for (int i = 0; i < this->materias_count ;i++)
    {
        if (_materias[i])
        {
            delete _materias[i];
            _materias[i] = NULL;
        }
    }
}