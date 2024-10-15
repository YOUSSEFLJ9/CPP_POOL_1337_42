/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:51:03 by ymomen            #+#    #+#             */
/*   Updated: 2024/10/15 21:14:01 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default"), _materiasCount(0)
{
    std::cout << "\033[31mCharacter default constructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}
Character::Character(std::string const &name) : _name(name), _materiasCount(0)
{
    std::cout << "\033[31mCharacter parameter constructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
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
       _name = crt._name;
        _materiasCount = crt._materiasCount;
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
    return _name;
}


void Character::equip(AMateria* m)
{
    if (_materiasCount == 4 || !m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!_materias[i])
        {
            _materias[i] = m;
            _materiasCount++;
            break;
        }
        if (i == 3)
            std::cout << "Character has no more slots" << std::endl;
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !this->_materias[idx] || !this->_materias[idx]->isAvailable())
    {
        std::cout << "can not unequip" << std::endl;
        return;
    }
    _materias[idx]->setAvailable(false);

}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !this->_materias[idx] || !this->_materias[idx]->isAvailable())
       std::cout << "can not use" << std::endl;
    else
        _materias[idx]->use(target);
}

void Character::_copy_materias(Character const &crt)
{
    int k = 0;
    for(int i = 0; i < 4; i++)
    {
        if (crt._materias[i] && crt._materias[i]->isAvailable())
            _materias[k++] = crt._materias[i]->clone();
    }
    for (; k < 4; k++)
        _materias[k] = NULL;
}
void Character::_delete_materias()
{
    for (int i = 0; i < this->_materiasCount ;i++)
    {
        if (_materias[i])
        {
            delete _materias[i];
            _materias[i] = NULL;
        }
    }
}
