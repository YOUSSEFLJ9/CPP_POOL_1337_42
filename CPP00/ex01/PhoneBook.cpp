/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:33:29 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/08 18:49:43 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::add_contact()
{
    this->contacts[this->index % 8].set_firstname();
    this->contacts[this->index % 8].set_lastname();
    this->contacts[this->index % 8].set_nickname();
    this->contacts[this->index % 8].set_phonenumber();
    this->contacts[this->index % 8].set_darksecret();
    if (this->size < 8)
        this->size++;
    index = (index + 1) % 8;
}

void PhoneBook::print_contact(std::string str) 
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}
 
void PhoneBook::search_contact()
{
    size_t i;
    std::string index;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    for (i = 0; i < size ; i++)
    {
        std::cout << "|" << std::setw(10) << (i % 8) + 1 << "|";
        print_contact(contacts[i % 8].get_firstname());
        std::cout << "|";
       print_contact(contacts[i % 8].get_lastname());
        std::cout << "|";
        print_contact(contacts[i % 8].get_nickname());
        std::cout << "|" << std::endl;
    }
    std::cout << "\nEnter the index of the contact you want to see" << std::endl;
    std::getline(std::cin, index);
    if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
    {
        i = index[0] - '1';
        if (i >= this->index)
        {
            std::cout << "Invalid index" << std::endl;
            return;
        }
        std::cout << "First name: " << this->contacts[i].get_firstname() << std::endl;
        std::cout << "Last name: " << this->contacts[i].get_lastname() << std::endl;
        std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
        std::cout << "Phone number: " << this->contacts[i].get_phonenumber() << std::endl;
        std::cout << "Dark secret: " << this->contacts[i].get_darksecret() << std::endl;
    }
    else
        std::cout << "Invalid index" << std::endl;
}