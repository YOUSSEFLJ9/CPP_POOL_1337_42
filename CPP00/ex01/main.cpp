/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:50:57 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/08 18:51:28 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command\n";
        std::cout <<"\n";
    }
    return (0);
    
}