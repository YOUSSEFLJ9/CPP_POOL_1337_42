/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:28:05 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/08 15:49:12 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>

    class PhoneBook
    {
    private:
        Contact contacts[8];
        size_t size;
        size_t index;
    public:
        PhoneBook();
        void add_contact();
        void search_contact();
        void print_contact(std::string str);
    };
#endif