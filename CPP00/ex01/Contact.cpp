/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:44:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/13 14:46:13 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact:: get_firstname()
{
    return (_firstname);
}
std::string Contact:: get_lastname()
{
    return (_lastname);
}
std::string Contact:: get_nickname()
{
    return (_nickname);
}
std::string Contact:: get_phonenumber()
{
    return (_phonenumber);
}
std::string Contact:: get_darksecret()
{
    return (_darksecret);
}

int Contact::_is_space(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::iswspace(str[i]))
            return (0);
    }
    return (1);
}

int Contact::_is_digit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (0);
    }
    return (1);
}

void Contact::set_firstname()
{
    std::string str;
    while (1)
    {
        std::cout << "Enter first name: ";
        if (!std::getline(std::cin, str)|| std::cin.eof())
            exit(1);
        if (!_is_space(str) && !str.empty())
        {
            _firstname = str;
            break;
        }
        else
            std::cout << "Invalid input. Try again." << std::endl;
    }
}

void Contact::set_lastname()
{
    std::string str;
    while (1)
    {
        std::cout << "Enter last name: ";
        if (!std::getline(std::cin, str)|| std::cin.eof())
            exit(1);
        if (!_is_space(str) && !str.empty())
        {
            _lastname = str;
            break;
        }
        else
            std::cout << "Invalid input. Try again." << std::endl;
    }
}

void Contact::set_nickname()
{
    std::string str;
    while (1)
    {
        std::cout << "Enter nickname: ";
        if (!std::getline(std::cin, str)|| std::cin.eof())
            exit(1);
        if (!_is_space(str) && !str.empty())
        {
            _nickname = str;
            break;
        }
        else
            std::cout << "Invalid input. Try again." << std::endl;
    }
}

void Contact::set_phonenumber()
{
    std::string str;
    while (1)
    {
        std::cout << "Enter phone number: ";
       if (!std::getline(std::cin, str)|| std::cin.eof())
            exit(1);
        if (_is_digit(str) && !str.empty())
        {
            _phonenumber = str;
            break;
        }
        else
            std::cout << "Invalid input. Try again." << std::endl;
    }
}

void Contact::set_darksecret()
{
    std::string str;
    while (1)
    {
        std::cout << "Enter dark secret: ";
        if (!std::getline(std::cin, str)|| std::cin.eof())
            exit(1);
        if (!_is_space(str) && !str.empty())
        {
            _darksecret = str;
            break;
        }
        else
            std::cout << "Invalid input. Try again." << std::endl;
    }
}
